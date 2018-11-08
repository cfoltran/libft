/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:52:33 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/08 11:30:38 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *s, char c)
{
	int counter;
	int in_word;
	int i;

	counter = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			in_word = 0;
		}
		if (s[i] && s[i] != c && in_word == 0)
		{
			in_word = 1;
			counter++;
			i++;
		}
		else
			i++;
	}
	return (counter);
}

int		lword(char const *s, char c, int i)
{
	int len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = (char**)malloc(sizeof(*res) * count_words(s, c) + 1)) == NULL)
		return(NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i])
		{
			if ((res[j] = (char*)malloc(sizeof(char) * lword(s, i, c))) == NULL)
				return (NULL);
			k = 0;
			while (s[i] && s[i] != c)
				res[j][k++] = s[i++];
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

// int		main(int argc, char const *argv[])
// {
// 	(void) argc;
// 	char **result;
// 	int i;

// 	i = 0;
// 	result = ft_strsplit(argv[1], argv[2][0]);
// 	while (result[i])
// 	{
// 		ft_putstr(result[i++]);
// 		ft_putchar('\n');
// 	}
// 	return 0;
// }
