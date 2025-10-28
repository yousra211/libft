/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:09:29 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 16:31:51 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (size == 0)
		return (malloc(1));
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
int main()
{
	char *str = malloc(2);
	char *str1 = ft_calloc(2, 1);
	int i = 0;
	while(str[i])
	{	
		printf("%d", str[i]);
		i++;
	}
	// while(*str1)
	// {
	// 	printf("%c", *str1);
	// 	str1++;
	// }
}