/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:28:28 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/31 10:49:19 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**strsplit(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	char **w;

	i = 0;
	j = 0;
	if (!s || (!(w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c))))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		if(!(w[i] =(char *)malloc(sizeof(char) * (ft_wordlen(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			w[i][j++] = s[k++];
		w[i][j] = '\0';
		i++;
	}
	w[i] = NULL;
	return (w);
}
