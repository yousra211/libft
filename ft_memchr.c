/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:26:18 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 11:31:57 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n && ptr[i] != (unsigned char)c)
		i++;
	if (ptr[i] == (unsigned char)c)
		return ((void *)&ptr[i]);
	return (NULL);
	
	// 	while (i < n)
	// {
	// 	if (ptr[i] == (unsigned char)c)
	// 		return ((void *)&ptr[i]);
	// 	i++;
	// }
	// return (NULL);
}
int main()
{
	// char *str = "hello";
	// char *s = ft_memchr(str, 'o', 3);
	// printf("%s\n", s);

	// char *str1 = "hello";
	// char *s1 = memchr(str1, 'o', 3);
	// printf("%s", s1);

	int tab[12] = {1, 67,  57, 1337};
	// int *p = ft_memchr(tab, 57, 16);
	// printf("%d", *p);
	
	// int *p1 = memchr(tab, 57, 16);
	// printf("%d", *p1);
	
	// int *qq = ft_memchr(tab, 1337, 16);
	// printf("%d", *qq);
	int *qq1 = memchr(tab, 1337, 16);
	printf("%d", *qq1 + 1);
 }