/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouati <mlouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:28:15 by mlouati           #+#    #+#             */
/*   Updated: 2023/12/10 23:20:59 by mlouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_checkchar(char c, va_list args, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_address(va_arg(args, unsigned long), c, count);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'X' || c == 'x')
		ft_putnbr_base(va_arg(args, unsigned long), c, count);
	else if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i], &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1])
		{
			ft_checkchar(str[i + 1], args, &count);
			i += 2;
		}
	}
	return (count);
}
