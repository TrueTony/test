/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:27:36 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/21 17:14:14 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_free(t_list *p)
{
	t_list	*cur;

	while (p)
	{
		cur = p->next;
		free(p);
		p = cur;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*p;
	t_list	*cur;

	if (!lst || !f)
		return (NULL);
	if (!(p = f(lst)))
		return (NULL);
	res = p;
	while ((lst = lst->next))
	{
		if (!(cur = f(lst)))
		{
			free(cur);
			ft_free(p);
			return (NULL);
		}
		p->next = cur;
		p = p->next;
	}
	return (res);
}
