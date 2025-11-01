/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:52:29 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 17:20:35 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (src && dstsize == 0)
		return (dstsize + srclen);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
	{
		while (src[i] && i < dstsize - dstlen - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (srclen + dstlen);
	}
}

// int main()
// {
// 	char dest[10] = "a";
//     printf("%zu\n" , ft_strlcat(dest, "addddddddddddddddddddd", 10));


// 	// char str[3] = "hey";
// 	// size_t i = ft_strlcat(str , "worlde", 10);
// 	// printf("%zu\n", i);
// 	// printf("%s\n", str);

// 	// char str1[10] = "\0";
// 	// size_t j = ft_strlcat(NULL , "", 0);
// 	// printf("%zu\n", j);
// 	// printf("%s\n", str1);
//  }