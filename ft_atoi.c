/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:32:56 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/17 15:20:22 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
