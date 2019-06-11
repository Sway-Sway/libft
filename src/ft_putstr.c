/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:27:41 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/11 15:50:43 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr(char const *str)
{
	if (!(str))
		return ;
	write(1, str, ft_strlen(str));
}

int	main(void)
{
	ft_putstr("I hope this works");
}
