/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:45:05 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/10 11:04:18 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || src_len == 0)
		return (0);
	i = 0;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	if (dstsize > dst_len + 1)
	{
		while (i < dstsize - dst_len)
		{
			*(dst + dst_len + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
