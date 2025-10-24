/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:39:28 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/22 11:47:03 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_exist(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

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
	substring = ft_strncpy(substring, &s[start], len);
	return (substring);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	int				size;
	char			*str;
	unsigned int	start;

	i = 0;
	size = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[i] && ft_exist(set, s1[i]))
		i++;
	start = i;
	while (s1[i] && !ft_exist(set, s1[i]))
	{
		size++;
		i++;
	}
	str = ft_substr(s1, start, size);
	return (str);
}

// int main()
// {
// 	char *s1 = "abchelloabc";
// 	char *set = "abcdd";
// 	char *dst = ft_strtrim(s1, set);
// 	printf("%s",dst);
// }
