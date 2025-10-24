/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:41:29 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/23 12:15:23 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <ctype.h>
//  #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
// 	int i = ft_isascii(25);
// 	int j = isascii(25);
// 	printf("%d \n%d \n", i , j);
// }