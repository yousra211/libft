/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:27:54 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/23 12:17:04 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main()
// {
// 	int i = ft_isalnum('T');
// 	int j = isalnum('T');
// 	printf("%d\n%d\n", i , j);
// }