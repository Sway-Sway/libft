/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:30:55 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/28 10:51:36 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	unsigned const char *s1_total;
	unsigned const char *s2_total;

	i = 0;
	s1_total = (unsigned const char *)s1;
	s2_total = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	while (((s1_total[i] != '\0' && s2_total[i] != '\0')) && ((size_t)i < n))
	{
		if (s1_total[i] != s2_total[i])
			break ;
		i++;
	}
	return (s1_total[i] - s2_total[i]);
}
