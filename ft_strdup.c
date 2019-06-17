/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:23:10 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/27 12:06:06 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(str, src);
	return (str);
}
