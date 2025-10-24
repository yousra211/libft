/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:38:02 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/19 13:39:43 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*p;

	if (lst && (*lst) && del)
	{
		tmp = (*lst);
		while (tmp)
		{
			p = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = p;
		}
	}
}
