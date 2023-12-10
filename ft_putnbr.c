/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouati <mlouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:24:16 by mlouati           #+#    #+#             */
/*   Updated: 2023/12/10 23:22:53 by mlouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
	}
	else if (nb >= 0)
	{
		if (nb >= 0 && nb <= 9)
			ft_putchar(nb + '0', count);
		else
		{
			ft_putnbr(nb / 10, count);
			ft_putchar(nb % 10 + '0', count);
		}
	}
	else
	{	
		ft_putchar('-', count);
		ft_putnbr(-nb, count);
	}
}

void	ft_putnbr_unsigned(unsigned int nb, int *count)
{
	if (nb >= 0)
	{
		if (nb >= 0 && nb <= 9)
			ft_putchar(nb + '0', count);
		else
		{
			ft_putnbr_unsigned(nb / 10, count);
			ft_putchar(nb % 10 + '0', count);
		}
	}
}
