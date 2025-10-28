/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:52:29 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 17:08:36 by yhamdaou         ###   ########.fr       */
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
	if (!dst)
		return (srclen + dstsize);
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
// 	char str[5] = "hey";
// 	size_t i = ft_strlcat(str , "worlde", 2);
// 	printf("%zu\n", i);
// 	printf("%s\n", str);

// 	char str1[5] = "hey";
// 	size_t j = strlcat(str1 , "worlde", 2);
// 	printf("%zu\n", j);
// 	printf("%s\n", str1);
//  }