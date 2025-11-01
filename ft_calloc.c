/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:09:29 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 18:33:20 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	if (count != 0 && size > SIZE_MAX / count )
		return (NULL);
	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return ((void *)ptr);
}


// int main()
// {
// 	char *s = ft_calloc(10, 0);

// 	printf("%s\n", s);
// }

// int main()
// {
// 	// char *str = malloc(2);
// 	// char *str1 = ft_calloc(0, 3);
// 	// int i ;
// 	// for (i = 0; i < 3; i++)
// 	// 	printf("%d\n", str[i]);
	
// 	// while(*str1)
// 	// {
// 	// 	printf("%c", *str1);
// 	// 	str1++;
// 	// }
// 	int *p = ft_calloc(5445451, 155454);
// 	if(!p)
// 	 	printf("null");
// }