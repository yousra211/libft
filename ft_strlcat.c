/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:52:29 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/23 12:08:08 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
	{
		while (src[i] && i < dstsize - 1)
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
// 	char str[15] = "hello";
// 	size_t i = ft_strlcat(str , "worlde", 4);
// 	size_t j = strlcat(str , "worlde", 4);
// 	printf("%zu\n%zu\n", i, j);
// }