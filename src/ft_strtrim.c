/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:58:25 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/03 16:45:42 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	size_t k;
	char *w;

	i = 0;
	j = 0;
	if (!*s)
		return (NULL);
	while (*s)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (s[j - 1] == ' ' || s[j - 1] == 'n' || 
				s[j - 1] == '\t' && s[j - 1] == '\0')
			--j;
	}
	k = ft_strlen(s);	
	k = k - i - j;
	if (!(w = (char *)malloc(sizeof(char) * (k + 1))))
		return (NULL);
	s += i;
	i = 0;
	while ( i < k )
	{
		w[i] = *s++;
		i++;
	}
	w[i] == '\0';
	return (w);
}
