/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:50:37 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/24 10:40:00 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *ret;

	*ret = dest;
	while (*dest)
		dest++;
	while (n--)
		if (!(*dest++ = *src++))
			return (ret);
	*dest = 0;
	return (ret);
}
