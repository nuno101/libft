/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:49:15 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/09 11:46:29 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (*dst);
	while (dstsize > 1)
	{
		*dst = *src;
		dstsize--;
		dst++;
		src++;
	}
	dst++;
	*dst = '\0';
	return (*dst);
}
