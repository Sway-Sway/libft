/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:52:15 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/27 12:33:59 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int h;
	int n;

	h = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[h] != '\0' && (size_t)h < len)
	{
		n = 0;
		while (s2[n] == s1[h + n] && s1[h + n] != '\0' && s2[n] != '\0')
		{
			if ((size_t)(h + n) > len)
				return (NULL);
			if (s2[n + 1] == '\0')
				return ((char *)s1 + h);
			n++;
		}
		h++;
	}
	return (NULL);
}
