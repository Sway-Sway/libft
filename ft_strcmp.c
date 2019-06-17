/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:26:57 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/28 10:52:38 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int					i;
	unsigned const char *s1_total;
	unsigned const char *s2_total;

	s1_total = (unsigned const char *)s1;
	s2_total = (unsigned const char *)s2;
	i = 0;
	while (s1_total[i] != '\0' && s2_total[i] != '\0')
	{
		if (s1_total[i] != s2_total[i])
			break ;
		i++;
	}
	return (s1_total[i] - s2_total[i]);
}
