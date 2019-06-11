/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:20:24 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/11 11:57:08 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (!(*s1 || *s2))
		return (0);
	while (s1 && s2)
	{
		if (s1[i] != s2[i])
		{
			i++;
			return (0);
		}
		else 
			return (1);
	}
	return (0);
}
