/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:58:25 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/18 11:19:00 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	k;
	char	*w;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (s[i] != '\0'))
		i++;
	k = ft_strlen(s);
	if (i == k)
		return (ft_strnew(0));
	while (s[k - 1] == ' ' || s[k - 1] == 'n' ||
			s[k - 1] == '\t' || s[k - 1] == '\0')
		k--;
	k = k - i;
	if (!(w = ft_strnew(k)))
		return (NULL);
	s += i;
	ft_memmove(w, s, k);
	return (w);
}
