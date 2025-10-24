/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:39:26 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/22 11:50:51 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	x;
	char	c;

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x = -x;
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	else
	{
		c = x + '0';
		write(fd, &c, 1);
	}
}
