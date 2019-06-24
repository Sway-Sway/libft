/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 23:06:53 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/24 23:07:05 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int	count;
	int	len;
	int	ascii;

	len = ft_strlen(str);
	count = 0;
	while (count < len / 2)
	{
		ascii = str[count];
		str[count] = str[len - count - 1];
		str[len - count - 1] = ascii;
		count++;
	}
	return (str);
}
