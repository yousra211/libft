/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:00:17 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/27 17:01:49 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = 0;
	pos = -1;
	while (s[i])
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	if (s[i] == c)
		pos = i;
	if (pos < 0)
		return (NULL);
	return ((char *)&s[pos]);
}
int main()
{
	char *s = ft_strrchr("halltvav", '\0');
	printf("%s\n", s);
	
	// char *s1 = strrchr("halltvav", '\0');
	// printf("%s", s1);
}
