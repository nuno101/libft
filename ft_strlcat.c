/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:45:05 by nlouro            #+#    #+#             */
/*   Updated: 2021/08/26 15:46:38 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
    if (dstsize < dst_len + 1)
        return (src_len + dstsize);
    if (dstsize > dst_len + 1)
	{
		while (dstsize > 1)
		{
			*(dst + dst_len + i) = *(src + i);
			i++;
    	    dstsize--;
		}
		*(dst++) = '\0';
	}
	return(dst_len + src_len);
}
