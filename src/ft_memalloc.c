/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:08:26 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/07 14:11:39 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (!(mem = malloc(sizeof(size + 1))))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
