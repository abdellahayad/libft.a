/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:37:46 by aayad             #+#    #+#             */
/*   Updated: 2024/11/19 21:10:50 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	numbers_tab(int n, char *str, int len)
{
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		numbers_tab(147483648, str, len);
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[len] = '0';
	else
	{
		while (n > 0)
		{
			str[len] = (n % 10) + 48;
			n /= 10;
			len--;
		}
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = count_digits(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	numbers_tab(n, ptr, len - 1);
	return (ptr);
}
