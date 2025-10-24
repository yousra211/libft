/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:12:41 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/23 12:05:02 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i + j] && needle[j] && i < len)
	{
		if (str[i + j] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (needle[j] == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
