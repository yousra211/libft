/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:32:16 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/22 11:36:40 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dst, const char *src)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	i = 0;
	while (dst[dstlen])
		dstlen++;
	while (src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*str;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc((s1len + s2len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str = ft_strcat(str, s2);
	return (str);
}

// int main()
// {
// 	char *s1 = NULL;
// 	char *s2 = "girl";
// 	char *str = ft_strjoin(s1, s2);
// 	printf("%s",str);
// }