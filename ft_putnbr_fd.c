/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:39:26 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 17:05:25 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x = -x;
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putchar_fd(x % 10 + '0', fd);
	}
	else
		ft_putchar_fd(x + '0', fd);
}
// int main()
// {
// 	// int fd = open("fd.txt", O_WRONLY);

// 	ft_putnbr_fd(2147483648, 1);
// 	// close(fd);
// }