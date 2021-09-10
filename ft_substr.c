/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:30:02 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/10 11:56:16 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	int		i;

	buffer = malloc(len + 1);
	if (buffer == 0)
		return (NULL);
	i = 0;
	while ((size_t) i < len && *(s + start + i) != '\0')
	{
		buffer[i] = *(s + start + i);
		i++;
	}
	buffer[i + 1] = '\0';
	return (buffer);
}
