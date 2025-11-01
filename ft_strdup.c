/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:15:45 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 18:33:04 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		srclen;
	char	*dst;

	srclen = ft_strlen(s1);
	i = 0;
	dst = malloc ((srclen + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (i < srclen)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
// int main()
// {
// 	char *dst = ft_strdup("hello");
// 	printf("%s\n", dst);
// 	char *dst1 = strdup("hello");
// 	printf("%s", dst1);
// }