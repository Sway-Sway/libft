/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:17:48 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/17 15:25:02 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *s2;
	unsigned char *d2;

	s2 = (unsigned char *)src;
	d2 = (unsigned char *)dest;
	while (n != 0)
	{
		*d2 = *s2;
		if (*s2 == (unsigned char)c)
			return (d2 + 1);
		d2++;
		s2++;
		n--;
	}
	return (NULL);
}
