/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:56:06 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/02 21:49:08 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*ptr;
	size_t			i;
	
	i = 0;
	ptr = (unsigned char *)pointer;
	while (i < count)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
