/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:40 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/07 16:06:11 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen((char *)s);
		if ((str = (char *)malloc(sizeof(str) * len)) == NULL)
			return (NULL);
		while (s[i])
		{
			str[i] = f(s[i], i);
			i++;
		}
		return (str);
	}
	return (NULL);
}
