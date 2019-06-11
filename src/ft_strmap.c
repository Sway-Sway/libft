/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:04:32 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/11 17:23:33 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int i;
	char *str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i +=1;
	}
	str[i] = '\0';
	return (str);
}
