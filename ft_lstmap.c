/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:48:37 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/20 12:35:53 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_del(t_list **list, void (*del)(void *))
{
	ft_lstclear(list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new;
	t_list	*list;
	t_list	*nnode;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = f(lst->content);
		if (!new)
			return (ft_del(&list, del));
		nnode = malloc(sizeof(t_list));
		if (!nnode)
		{
			del(new);
			return (ft_del(&list, del));
		}
		nnode->content = new;
		nnode->next = NULL;
		ft_lstadd_back(&list, nnode);
		lst = lst->next;
	}
	return (list);
}
