/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:08:24 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/09 17:29:07 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && j < len && 
				len > ft_strlen(needle))
		{
			if (needle[i + j])
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
