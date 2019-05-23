/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:26:57 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/23 12:29:37 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int s1_total;
	int s2_total;

	i = 0;
	s1_total = 0;
	s2_total = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			s1_total = s1[i];
			s2_total = s2[i];
			break ;
		}
		i++;
	}
	return (s1_total - s2_total);
}
