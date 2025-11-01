/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:38:02 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/31 18:39:12 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (lst && (*lst) && del)
	{
		while ((*lst))
		{
			p = (*lst)->next;
			del((*lst)->content);
			free((*lst));
			(*lst) = p;
		}
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
// 	t_list *tmp = lst;
// 		while(tmp)
// 	{
// 		printf("%c\n", *(char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("here : %s\n", (char *)lst->content);
// 	ft_lstclear(&lst, free);

// 	 printf("%s", (char *)lst);
// }
