/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:12:56 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/12 14:02:39 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = -1;
	if (!*haystack)
		return ((char *)haystack);
	while (haystack[++i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[i + j])
				return ((char *)haystack + i);
			j++;
		}
	}
	return (NULL);
}
