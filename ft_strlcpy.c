/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:34:49 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 16:56:40 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstsize == 0) // pour eviter underflow
		return (srclen);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
// int main()
// {
// 	char dst[6] = "";
// 	char *src = "hello";
// 	char dst1[6] = "";
// 	char *src1 = "hello";
// 	size_t i = ft_strlcpy(dst, src, 0);
// 	printf("%zu\n", i);
// 	printf("%s\n", dst);
	
// 	size_t j = strlcpy(dst1, src1, 0);
// 	printf("%zu\n", j);
// 	printf("%s\n", dst1);
// }