/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:11:47 by aayad             #+#    #+#             */
/*   Updated: 2024/11/19 21:06:41 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_sign(const char *str, int i)
{
	if (str[i] == '-')
		return (-1);
	else if (str[i] == '+')
		return (1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sing;
	long	result;
	long	var;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sing = get_sign(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		var = result;
		result = (result * 10) + (str[i++] - '0');
		if (result / 10 != var && sing == 1)
			return (-1);
		else if (result / 10 != var && sing == -1)
			return (0);
	}
	return (result * sing);
}
