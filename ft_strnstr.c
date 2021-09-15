/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:47:45 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/15 10:00:15 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0)
		return (0);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0' || i >= len)
				return ((char *)(haystack + i - j + 1));
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (NULL);
}
