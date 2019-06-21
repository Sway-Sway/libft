/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:28:28 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/21 09:32:10 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**w;

	i = 0;
	j = 0;
	k = 0;
	if (!s ||
		(!(w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1)))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k + j] != c && s[k + j])
			j++;
		w[i] = ft_strsub(s, k, j);
		i++;
		k += j;
	}
	w[i] = NULL;
	return (w);
}
