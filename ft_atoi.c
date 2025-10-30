/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:57:58 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/10/30 13:08:53 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_depasser(char *str)
// {
// 	int len;

// 	len = 0;
// 	while(str[len])
// 		len++;
		
// }

int	ft_atoi(const char *str)
{
	int				i;
	int				signe;
	unsigned long	n;
	
	i = 0;
	signe = 1;
	n = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		if (signe == 1 && n > LONG_MAX)
			return (-1);
		if (signe == -1 && n > LONG_MIN)
			return (0);
		i++;
	}
	return ((int)n * signe);
}
int main()
{
	 char *str = "    \n999999999999999999999999999999";
	// char *str = "-21474836500";
	int i = ft_atoi(str);
	printf("%d\n", i);
	//   printf("LONG_MAX = %ld\n", LONG_MAX);
    // printf("LONG_MIN = %ld\n", LONG_MIN);

	int j = atoi(str);
	printf("%d\n", j);
}