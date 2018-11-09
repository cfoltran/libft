/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:30:56 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/09 15:37:55 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	*res;
	int		sign;
	int		len;

	res = NULL;
	sign = (n < 0) ? -1 : 1;
	len = ft_len(n);
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
