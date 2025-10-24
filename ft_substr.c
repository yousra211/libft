/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:30 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/22 11:22:50 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
// int main()
// {
// 	char *s = ft_substr("helloooooo" , 3, 4);
// 	printf("%s", s);
// }
	// while (i < len)
	// {
	// 	substring[i] = s[start + i];
	// 	i++;
	// }
	// substring[i] = '\0';