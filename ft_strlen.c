/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:54:42 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/27 12:09:49 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// int main()
// {
// 	int i = ft_strlen("NULL");
// 	// int j = strlen(NULL);
// 	printf("%d \n", i);
// 	// printf("%d ", j);
// }