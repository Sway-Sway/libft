/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:02:56 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/28 14:09:52 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	counter(int i)
{
	int j;

	j = 0;
	if (i == 0)
		return (1);
	while (i)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char *str;
	int len;

	len = counter(n);
	if (n < 0)
		len += 1;
	str = (char*)malloc(sizeof(char*) * len + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		str[len] = '\0';
		len--;
	}
	else if (n > 0)
	{
		str[len] = '\0';
		len--;
	}
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[len] = '0' + (n % 10);
		n = n/10;
		len--;
	}
	return (str);
}
