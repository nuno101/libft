/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:23:34 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/16 11:01:55 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int len;
	int i;
	int count;
	char *array[];

	len = ft_strlen(s);
	ft_strchr(s, c);
	if (s == 0)
		return (0); 
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*array[count] = 
			count++;
		}
		i++
	}
	return (0); 
}
