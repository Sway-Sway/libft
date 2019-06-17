/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:57:57 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/24 14:31:16 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}
