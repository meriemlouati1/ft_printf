/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouati <mlouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:25:16 by mlouati           #+#    #+#             */
/*   Updated: 2023/12/10 22:14:30 by mlouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_address(unsigned long nb, char c, int *count)
{
	char	*t;

	t = "0123456789abcdef";
	if (c == 'p')
	{
		if (nb >= 0 && nb <= 15)
			ft_putchar(t[nb], count);
		else
		{
			ft_putnbr_address(nb / 16, c, count);
			ft_putchar(t[nb % 16], count);
		}
	}
}
