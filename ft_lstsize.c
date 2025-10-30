/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:19:55 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/30 16:25:49 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
int main()
{
	t_list *lst = NULL;
	int x = 8;
	int y = 9;
	t_list *new1 = ft_lstnew(&x);
	t_list *new2 = ft_lstnew(&y);
	ft_lstadd_front(&lst, new1);
	ft_lstadd_front(&lst, new2);
	int i = ft_lstsize(lst);
	printf("%d", i);
}