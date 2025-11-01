/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:48:37 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 18:57:01 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void *dup_content(void *content)
// {
// 	char *str = (char *)content;
// 	char *dst = ft_strdup(str);
// 	return (dst);
// }

static t_list	*ft_del(t_list **list, void (*del)(void *))
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
// int main()
// {
// 	t_list *lst = NULL;
// 	char *c = ft_strdup("a");
// 	char *d = ft_strdup("b");
// 	char *f = ft_strdup("c");
// 	t_list *node1 = ft_lstnew(c);
// 	t_list *node2 = ft_lstnew(d);
// 	t_list *node3 = ft_lstnew(f);
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
	
// 	t_list *list = ft_lstmap(lst, dup_content, free);
// 	while(list)
// 	{
// 		printf("%c\n", *(char *)list->content);
// 		list = list->next;
// 	}
// }