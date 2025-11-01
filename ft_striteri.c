/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:04:48 by yhamdaou          #+#    #+#             */
/*   Updated: 2025/11/01 18:24:33 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// void    to_upper_odd(unsigned int i, char *c)
// {
//     if (i % 2 == 1 && *c >= 'a' && *c <= 'z')
//         *c = (*c - 32);
// }

// void    xxxxxx(unsigned int i, char *c)
// {
//     if (i % 2 == 1 && *c >= 'a' && *c <= 'z')
//         *c = (*c - 32);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// int main()
// {
// 	void (*f[])(unsigned int, char*) = {to_upper_odd, xxxxxx};
	
// 	char s[] = "hellloow";
// 	ft_striteri(s, f[0]);
// 	printf("%s", s);
	
// }