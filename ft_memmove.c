/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:59:57 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/11 17:54:56 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*sour;
	size_t		i;
	char		*dest;
	char		*tmp;

	sour = (const char*)src;
	dest = (char*)dst;
	i = 0;
	if ((tmp = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	while (i < len)
	{
		*(tmp + i) = *(sour + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(dest + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (dst);
}
