/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:15:36 by nlouro            #+#    #+#             */
/*   Updated: 2021/08/24 17:19:31 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (s == c)
			return (*s);
		else
			*s++;
	}
	return (0);
}