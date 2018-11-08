/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:26:54 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/07 16:15:30 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	const char		*sour;
	char			*dest;

	sour = src;
	dest = dst;
	i = 0;
	while (i < n)
	{
		dest[i] = sour[i];
		if (sour[i] == c)
			break ;
		i++;
	}
	return (dst);
}
