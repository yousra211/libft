/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:12:41 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 12:35:09 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	int s_len = ft_strlen(needle);
	while (str[i + j] && needle[j] && i < len)
	{
		if (str[i + j] == needle[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
int main()
{
	char *s = ft_strnstr("hello", "llo", 7);
	printf("%s\n", s);
	char *s1 = strnstr("hello", "llo", 7);
	printf("%s", s1);
}