/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:01:25 by event             #+#    #+#             */
/*   Updated: 2019/06/05 16:25:06 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t i;
	size_t j;
	size_t k;
	char *s3;

	if (!*s1 || !*s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = i + j;
   if (!(s3 = ft_strnew(k + 1)))
	 return (NULL);
   s3 = ft_strcat(s3,(char *)s1);
   s3 = ft_strcat(s3,(char *)s2);
   return (s3);
}
