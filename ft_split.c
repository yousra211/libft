/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:23:26 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/22 11:48:27 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strslen(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	ft_strrlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_fill(char **p, char const *s, char c, int size)
{
	int	i;
	int	len;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < size)
	{
		while (s[i] && s[i] == c)
			i++;
		len = ft_strrlen(&s[i], c);
		p[j] = malloc ((len + 1) * sizeof(char));
		if (!p[j])
			return (NULL);
		k = 0;
		while (s[i] && s[i] != c)
			p[j][k++] = s[i++];
		p[j][k] = '\0';
		j++;
	}
	p[j] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	char	**p;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	size = ft_strslen(s, c);
	p = malloc((size + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	p = ft_fill(p, s, c, size);
	return (p);
}

// int main()
// {
// 	char **p = ft_split("hello:hey", ':');
// 	int i = 0;
// 	while (p[i])
// 	{
// 		printf("%s\n", p[i]);
// 		i++;
// 	}
// }