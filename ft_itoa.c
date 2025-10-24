/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:16:06 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/17 14:39:03 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// void	ft_putnbr(int n)
// {
// 	long	x = n;
// 	char	c;
// 	if (x < 0)
// 	{
// 		write(1, '-', 1);
// 		x = -x;
// 	}
// 	if (x > 9)
// 	{
// 		ft_putnbr(x / 10);
// 		ft_putnbr(x % 10);
// 	}
// 	else
// 	{
// 		c = x + '0';
// 		write(1, &c, 1);
// 	}
// }

int	ft_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_fill(char *s, int n, int len)
{
	s[len] = '\0';
	len--;
	if (n < 0)
	{
		while (len > 0)
		{
			s[len] = ft_abs(n % 10) + '0';
			n = n / 10;
			len--;
		}
		s[len] = '-';
	}
	else
	{
		while (len >= 0)
		{
			s[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;

	len = ft_len(n);
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s = ft_fill(s, n, len);
	return (s);
}
// int main()
// {
// 	char *s = ft_itoa(-21474848);
// 	printf("%s", s);
// }
