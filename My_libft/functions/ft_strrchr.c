/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:13:39 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/23 11:26:26 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char const *str, int c)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			tmp = i;
		++i;
	}
	if (c == '\0')
		return ((char *)str + i);
	if (tmp != -1)
		return ((char *)str + tmp);
	return (NULL);
}
