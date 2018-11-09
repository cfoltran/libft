/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:27:35 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/09 15:38:43 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		find;

	i = -1;
	find = -1;
	printf("%s", s);
	while (s[++i])
	{
		printf("%d\n", i);
		if (s[i] == c)
			find = i;
	}
	if (find == -1)
		return (NULL);
	return ((char*)&s[find]);
}
