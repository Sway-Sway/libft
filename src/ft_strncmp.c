/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:30:55 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/24 14:45:26 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
		if (*s1++ != *s2++)
			return (*(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1));
	return (0);
}
