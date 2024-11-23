/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:07:45 by aayad             #+#    #+#             */
/*   Updated: 2024/11/17 11:22:10 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_overlap(unsigned char *d, const unsigned char *s, size_t len)
{
	size_t	i;

	i = 0;
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else if (d < s)
	{
		ft_memcpy(d, s, len);
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptrdst;
	const unsigned char	*ptrsrc;

	if (!src && !dst)
		return (NULL);
	ptrdst = (unsigned char *)dst;
	ptrsrc = (const unsigned char *) src;
	check_overlap(ptrdst, ptrsrc, len);
	return (dst);
}
