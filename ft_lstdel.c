/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:31:18 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/08/12 12:42:57 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *cnt;
	t_list *nxt;

	cnt = *alst;
	while (cnt)
	{
		nxt = cnt->next;
		del((cnt->content), (cnt->content_size));
		free(cnt);
		cnt = nxt;
	}
	*alst = NULL;
}
