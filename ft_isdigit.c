/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:41 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/23 12:15:05 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <ctype.h>
//  #include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main()
// {
// 	int i = ft_isdigit('g');
// 	int j = isdigit('g');
// 	printf("%d \n%d \n", i , j);
// }