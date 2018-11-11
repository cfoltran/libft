/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:27:35 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/11 19:55:27 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		find;

	i = -1;
	find = -1;
	if (s == NULL)
		return (NULL);
	while (s[++i])
		if (s[i] == c)
			find = i;
	if (find != -1)
		return ((char*)&s[find]);
	return (NULL);
}
