/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouati <mlouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:27:17 by mlouati           #+#    #+#             */
/*   Updated: 2023/12/10 22:10:55 by mlouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char c, int *count)
{
	char	*t;

	if (c == 'X')
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	if (nb >= 0 && nb <= 15)
		ft_putchar(t[nb], count);
	else
	{
		ft_putnbr_base(nb / 16, c, count);
		ft_putchar(t[nb % 16], count);
	}
}
