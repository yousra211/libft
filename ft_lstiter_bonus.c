/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:41:04 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 16:56:45 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// void incrementer(void *content)
// {
// 	int *p = (int *)content;
// 	(*p)++;
// 	printf("%d\n", *p);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
// int main()
// {
// 	t_list *lst = NULL;
// 	int *c = malloc(sizeof(int));
// 	int *d = malloc(sizeof(int));
// 	int *f = malloc(sizeof(int));
// 	*c = 12;
// 	*d = 13;
// 	*f = 15;
// 	t_list *node1 = ft_lstnew(c);
// 	t_list *node2 = ft_lstnew(d);
// 	t_list *node3 = ft_lstnew(f);
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	// ft_lstiter(lst, incrementer);
// 	t_list *tmp = lst;
// 	while(tmp)
// 	{
// 		printf("again :%d\n", *(int *)tmp->content);
// 		tmp = tmp->next;
// 	}
// }