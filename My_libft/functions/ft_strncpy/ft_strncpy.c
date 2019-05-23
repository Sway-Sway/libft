/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:38:32 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/23 09:46:48 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest++ = src++;
	}
	while (i < n)
	{
		dest[i] != '\0';
		i++;
	}
	return (dest);
}
