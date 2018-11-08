/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:30:56 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/08 15:38:40 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fonction qui calcule le nb de nb 12 => 2 123 => 3 1589 => 4

#include "libft.h"

int		ft_len(int n)
{
	int len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char *res;
	int sign;
	int len;

	res = NULL;
	sign = (n < 0) ? -1 : 1;
	len = ft_len(n);
	ft_putnbr(len);
	ft_putchar('\n');
	ft_putnbr(sign);
	if ((res = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (len >= 0)
	{
		res[len] = '0' + ABS(n % 10);
		n = ABS(n / 10);
		len--;
	}
	res[len] = '\0';
	(sign == -1) ? res[0] = '-' : res[0];
	return (res);
}

// int		main(int argc, char const *argv[])
// {
// 	(void) argc;
// 	char *result;

// 	result = ft_itoa(atoi(argv[1]));
// 	ft_putstr(result);
// 	return (0);
// }
