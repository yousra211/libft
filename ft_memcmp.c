/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:00:12 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 11:58:29 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n && (ptr1[i] == ptr2[i]))
		i++;
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
}
int main()
{
	char *s = "hello";
	char *s1 = "hallo";
	int  i = ft_memcmp(s, s1, 2);
	printf("%d\n", i);
	int  j = memcmp(s, s1, 2);
	printf("%d", j);
}