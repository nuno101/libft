/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:47:45 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/09 13:51:36 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	match_len;

	//if (*needle == '\0')
	//	return ((char *)haystack);
	i = 0;
	j = 0;
	match_len = ft_strlen(needle);
	if (!match_len)
		return ((char *)haystack);
	//while(*(haystack + i + j) != '\0' && i + j < len)
	while(*(haystack + i + j) && i + j < len)
	{
		if (*(haystack + i + j) == *(needle + i + j)) 
		{
			match_len--;
			if (match_len == 0) {
				return ((char *)(haystack + i));
			}
			j++;
		} else {
		  i = i + j + 1;
		  j = 0;
		  match_len = ft_strlen(needle);
		}
	}
	return (NULL);
}
