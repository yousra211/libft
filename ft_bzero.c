/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:19:00 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/31 19:47:13 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
// int main()
// {
// 	int i = 0;
// 	unsigned char *p = malloc(4);
// 	bzero(NULL, 0);
	// while(i < 4)
	// {
	// 	printf("%c",p[i]);
	// 	i++;
	// }
	// printf("");
	// unsigned char *ptr = malloc(4);
	// bzero(ptr, 4);
	// i = 0;
	// while(i < 4)
	// {
	// 	printf("%c",ptr[i]);
	// 	i++;
	// }
// }