/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:03:18 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/23 16:16:24 by yhamdaou         ###   ########.fr       */
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
