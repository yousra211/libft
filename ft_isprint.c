/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:47:53 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 16:51:40 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <ctype.h>
//  #include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main()
// {
// 	int i = ft_isprint('c');
// 	int j = isprint(127);
// 	printf("%d \n%d \n" , i, j);
// }