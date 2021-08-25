/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:15:36 by nlouro            #+#    #+#             */
/*   Updated: 2021/08/25 18:34:58 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		else
			i--;
	}
	return (NULL);
}
