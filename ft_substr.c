/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:30 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 18:36:16 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*substring;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
	{
		substring = malloc(1);
		if (substring)
			substring[0] = '\0';
		return (substring);
	}
	if (start + len > slen)
		len = slen - start;
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, &s[start], (len + 1));
	return (substring);
}
// int main()
// {
// 	char *s = ft_substr("ASD", 0, 0);
// 	printf("%s", s);
// }