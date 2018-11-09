/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:48:03 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/09 17:31:40 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	const size_t srclen = ft_strlen(src);
	const size_t dstlen = ft_strnlen(dst, maxlen);

	if (srclen < maxlen - dstlen) 
        ft_memcpy(dst + dstlen, src, srclen + 1);
	else 
	{
        ft_memcpy(dst + dstlen, src, maxlen - 1);
        dst[dstlen + maxlen-1] = '\0';
    }
    return dstlen + srclen;
}
