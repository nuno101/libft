/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:43:34 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/15 15:53:50 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*buffer;

	len = ft_nbrlen(n);
	if (n < 0)
		len++;
	buffer = (char *) malloc(len + 1);
	if (buffer == 0)
		return (0);
	if (n < 0)
	{
		n = -n;
		buffer[0] = '-';
	}
	buffer[len] = '\0';
	if (n == 0)
		buffer[0] = '0';
	else
	{
		while (n != 0)
		{
			len--;
			buffer[len] = (n % 10) + 48;
			n = n / 10;
		}
	}
	return (buffer);
}
