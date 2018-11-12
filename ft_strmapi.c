/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:40 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/12 11:15:41 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	int				len;

	if (s && f)
	{
		i = -1;
		len = ft_strlen((char *)s);
		if ((str = (char *)malloc(sizeof(str) * len)) == NULL)
			return (NULL);
		while (s[++i])
			str[i] = f(i, s[i]);
		return (str);
	}
	return (NULL);
}
