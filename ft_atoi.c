/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:14:29 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/06 17:37:52 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int res;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || 
		str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res =  res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
