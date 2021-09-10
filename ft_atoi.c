/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:55:35 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/10 10:44:40 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nr;

	i = 0;
	sign = 1;
	nr = 0;
	while (*(str + i) == '\n' || *(str + i) == '\t' || *(str + i) == '\v' || \
		*(str + i) == '\f' || *(str + i) == '\r' || *(str + i) == ' ')
		i++;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -sign;
		i++;
	}
	if (!ft_isdigit(*(str + i)))
		return (0);
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		nr = nr * 10 + (*(str + i) - '0');
		if (sign == 1 && nr > 2147483647)
			return (-1);
		if (sign == -1 && nr > 2147483648)
			return (0);
		i++;
	}
	return ((int)(sign * nr));
}
