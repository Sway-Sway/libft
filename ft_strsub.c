/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:41:28 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/18 11:23:55 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *str;

	if (!s || !(str = ft_strnew(len)))
		return (NULL);
	ft_memset(str, '\0', len);
	ft_strncpy(str, s + start, len);
	return ((char *)str);
}
