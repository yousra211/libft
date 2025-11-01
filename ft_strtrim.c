/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:39:28 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 17:54:26 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_exist(set, s1[end]))
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

// int main()
// {
// 	char *s1 = "abcxxxabdxxabc";
// 	char *set = "abc";
// 	char *dst = ft_strtrim(s1, set);
// 	printf("-%s-\n",dst);
// }
