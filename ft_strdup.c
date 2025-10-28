/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:15:45 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 17:34:17 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		srclen;
	char	*dst;

	srclen = 0;
	i = 0;
	while (s1[srclen])
		srclen++;
	dst = malloc (srclen * sizeof(char));
	while (i < srclen)
	{
		dst[i] = s1[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	char *dst = ft_strdup("hello");
// 	printf("%s\n", dst);
// 	char *dst1 = strdup("hello");
// 	printf("%s", dst1);
// }