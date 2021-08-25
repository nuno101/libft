/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:25:42 by nlouro            #+#    #+#             */
/*   Updated: 2021/08/25 13:56:06 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n > 0)
	{
		*dst = *src;
		n--;
		*dst++;
		*src++;
	}
	/* FIXME - return dst original value
	 */
	return (*dst);
}
