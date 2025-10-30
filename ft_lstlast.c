/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:42:32 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/30 17:26:08 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
int main()
{
	t_list *lst = NULL;
	int x = 8;
	int y = 9;
	t_list *new1 = ft_lstnew(&x);
	t_list *new2 = ft_lstnew(&y);
	ft_lstadd_front(&lst, new1);
	ft_lstadd_back(&lst, new2);
	t_list *p = ft_lstlast(lst);
	printf("%d", *(int *)p->content);
	
}