/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:56:06 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/29 19:34:59 by yhamdaou         ###   ########.fr       */
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

// #include <string.h> 
// #include <stdio.h>
// int main()
// {
// 	int j = 0;
// 	int *p = &j;

// 	ft_memset(p, 0, 4);
// 	ft_memset(p, 0, 3);
// 	ft_memset(p, 5, 2);
// 	ft_memset(p,57,1);
	
// 	// // printf("%d\n", j);
// 	printf("%d\n\n", *p);
	

// 	char b[7];
// 	ft_memset(b, 57, 1);
// 	ft_memset(b+1, 5, 1);
// 	ft_memset(b+2,0,1);
// 	ft_memset(b+3,0,1);
// 	printf("%d\n", *(int *)b);

// 	char c[7];
// 	ft_memset(b, 'c', 1);
// 	ft_memset(b+1, 'a', 1);
// 	ft_memset(b+2,'l',1);
// 	ft_memset(b+3,'l',1);
// 	printf("%c\n", *(b + 1));
// 	printf("%c\n", *b + 1);
// }
int main()
{
	int j = 0;
	
	// memset(NULL,0,0);
	ft_memset(&j,5,100);
	// ft_memset(&j, 9, 2);
}