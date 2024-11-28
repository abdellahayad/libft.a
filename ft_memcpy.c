/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 09:41:54 by aayad             #+#    #+#             */
/*   Updated: 2024/11/21 14:14:12 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmpdst;
	const unsigned char	*tmpsrc;
	size_t				i;

	if (!dst && !src && n > 0)
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (const unsigned char *)src;
	i = 0;
	while (i < n && dst != src)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
