/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:16:06 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/02 18:16:35 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
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

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static char	*ft_fill(char *s, int n, int len)
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
