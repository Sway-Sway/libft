/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:28:17 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/23 11:33:32 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strstr(const char *s1, const char *s2)
{
	size_t n;

	n = ft_strlen(s2);
	while (*s1)
		if (!ft_memcmp(s1++, s2, n))
			return (s1 - 1);
	return (0);
}
