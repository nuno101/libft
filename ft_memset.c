/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:10:20 by nlouro            #+#    #+#             */
/*   Updated: 2021/08/26 11:06:11 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = (char)c;
		len--;
		ptr++;
	}
	return (b);
}
