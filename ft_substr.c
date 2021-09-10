/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:30:02 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/10 14:04:25 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	int		i;

	if (s == 0)
		return (0);
	if ((int)start >= ft_strlen(s))
	{
		buffer = ft_calloc(1, 1);
		if (buffer == 0)
			return (NULL);
		return (buffer);
	}
	buffer = malloc(len + 1);
	if (buffer == 0)
		return (NULL);
	i = 0;
	while ((size_t) i < len && *(s + start + i) != '\0')
	{
		buffer[i] = *(s + start + i);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
