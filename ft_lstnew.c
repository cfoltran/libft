/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:51:07 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/08 17:07:48 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if ((list = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if ((list->content = malloc(sizeof(content))) == NULL)
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}

/////////
void	ft_display(t_list *elem)
{
	printf("%s\n", elem->content);
}

int		main(void)
{
	t_list *maillon;
	t_list *maillon2;

	maillon = ft_lstnew("coucou", 7);
	maillon2 = ft_lstnew("clément", 8);
	printf("content : %s\ncontent-size : %zu\n", maillon->content, maillon->content_size);
	//ft_lstdelone(&maillon, &ft_bzero);
	//printf("content : %s\ncontent-size : %zu", maillon->content, maillon->content_size);
	ft_lstadd(&maillon, maillon2);
	ft_lstiter(maillon, ft_display);
	return (0);
}