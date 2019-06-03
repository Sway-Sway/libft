/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:58:25 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/03 17:22:39 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t k;
	char *w;

	i = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[k - 1] == ' ' || s[k - 1] == 'n' || 
			s[k - 1] == '\t' || s[k - 1] == '\0')
		k--;
	k = k - i;
	if (!(w = (char *)malloc(sizeof(char) * (k + 1))))
		return (NULL);
	s += i;
	i = -1;
	while ( ++i < k )
		w[i] = *s++;
	w[i] = '\0';
	return (w);
}
