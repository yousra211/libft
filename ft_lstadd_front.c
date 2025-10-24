/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:58:38 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/17 21:19:29 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && !(*lst) && new)
		(*lst) = new;
	if (lst && (*lst) && new)
	{
		new->next = (*lst);
		(*lst) = new;
	}
}
// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *new = malloc(sizeof(t_list));
// 	int x = 9;
// 	new->content = &x;
// 	new->next = NULL;
// 	ft_lstadd_front(&lst, new);
// 	printf("%d\n", (*(int *)lst->content));
// }