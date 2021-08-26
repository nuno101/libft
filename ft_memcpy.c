/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:25:42 by nlouro            #+#    #+#             */
/*   Updated: 2021/08/26 11:02:47 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;

	ptr_d = dst;
	ptr_s = (char *)src;
	while (n > 0)
	{
		*ptr_d = *ptr_s;
		n--;
		ptr_d++;
		ptr_s++;
	}
	return (dst);
}
