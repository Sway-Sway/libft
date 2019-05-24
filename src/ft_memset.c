/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:40:18 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/24 14:32:30 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char *ptr;

	*ptr = s;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (s);
}
