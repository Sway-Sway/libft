/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:57:57 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/23 09:18:07 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char *dest2;

	dest2 = (char*)malloc(sizeof(char) * n + 1);
	dest2[n + 1] = '\0';
	ft_memcpy(dest2, src, n);
	ft_memcpy(dest, dest2, n);
	free(dest2);
	return (dest);
}
