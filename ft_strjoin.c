/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:32:16 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/28 17:10:08 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ft_strlcat(str, s2, (s1len + s2len + 1));
	return (str);
}

int main()
{
	char *s1 = NULL;
	char *s2 = "girl";
	char *str = ft_strjoin(s1, s2);
	printf("%s",str);
}