/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:28:14 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 16:13:09 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
// 	int fd = open("fd.txt", O_WRONLY);
	
// 	ft_putchar_fd('h', fd);
// 	close(fd);
	
// }
