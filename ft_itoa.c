/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:43:34 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/14 17:14:59 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(char *s, int nb)
{
	if (nb < 0)
	{
		*s = '-';
		s++;
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(s, nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		*s = nb + 48;
		*(s + 1) = '\0';
	}
}

char	*ft_itoa(int n)
{
	char *str;

	str = (char *)malloc(12);
	if (str == 0)
		return (NULL); 
	ft_putnbr(str, n);
	return (str);
}
