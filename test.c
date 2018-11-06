/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:06:36 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/06 17:39:14 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>

int		main(int argc, const char **argv)
{
	(void) argc;
    char src[10] = "awesome";
	char dest[10] = "awepute";

	//printf("ft_strcat : %s\n", ft_strcat(dest, src));
	//printf("*__strcat : %s\n", strcat(dest, src));
	printf("ft_strcmp : %d\n", ft_strcmp(dest, src));
	printf("*__strcmp : %d\n", strcmp(dest, src));
	printf("*____atoi : %d\n", atoi(argv[1]));
	printf("__ft_atoi : %d\n", ft_atoi(argv[1]));

	return (0);
}
