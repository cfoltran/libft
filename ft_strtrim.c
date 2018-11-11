/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:51:05 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/11 16:52:57 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		str_len(const char *s)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (!is_blank(s[i]))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = str_len(s);
	if ((res = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (s[i])
	{
		if (is_blank(s[i]))
			i++;
		while (s[i] && !is_blank(s[i]))
			res[j++] = s[i++];
	}
	res[j] = 0;
	return (res);
}
