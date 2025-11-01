/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:37:56 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 16:56:42 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
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
// 	node1->next = node2->next;
// 	ft_lstdelone(node2, free);
// 	while(lst)
// 	{
// 		printf("%c\n", *(char *)lst->content);
// 		lst = lst->next;
// 	}
// }
