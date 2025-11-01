/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:29:30 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 16:58:08 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (dst == src)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (src < dst && dst < src + len)
	{
		i = len;
		while (i > 0)
		{
			i--;
			ptr_dst[i] = ptr_src[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
// int main()
// {
// 	char src[10] = "hello";
// 	ft_memmove(src + 2 , src, 5);
// 	printf("%s\n",src);
	
// 	char src1[10] = "hello";
// 	memmove(src1 + 2 , src1 , 5);
// 	printf("%s\n",src1);
// 	printf("%s",src1 + 2);
// }