/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:11:18 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/21 19:54:52 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlist;
	t_list	*currentlist;

	nextlist = *alst;
	while (nextlist != NULL && del != NULL)
	{
		currentlist = nextlist;
		(*del)((currentlist)->content, (currentlist)->content_size);
		nextlist = currentlist->next;
		free(currentlist);
	}
	*alst = NULL;
}
