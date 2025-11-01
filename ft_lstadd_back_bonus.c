/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:03:18 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 19:09:20 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst && !(*lst) && new)
	{
		(*lst) = new;
		return ;
	}
	if (lst && (*lst) && new)
	{
		tmp = (*lst);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}


int main()
{
	t_list *lst = NULL;
	char c = 'a';
	char d = 'b';
	t_list *p = ft_lstnew(&c);
	t_list *p1 = ft_lstnew(&d);
	ft_lstadd_back(&lst, p);
	ft_lstadd_back(&lst, p1);
	while(lst)
	{
		printf("%c\n", *(char *)lst->content);
		lst = lst->next;
	}
}