/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:38:21 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/27 17:01:20 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
 #include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
int main()
{
	int c = ft_tolower('B');
	int d = tolower('B');
	printf("%c\n%c\n", c, d);
}