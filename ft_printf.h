/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouati <mlouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:29:17 by mlouati           #+#    #+#             */
/*   Updated: 2023/12/10 22:18:19 by mlouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

void	ft_putstr(const char *s, int *count );
void	ft_putchar(int c, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr_unsigned(unsigned int nb, int *count);
void	ft_putnbr_base(unsigned int nb, char c, int *count);
void	ft_putnbr_address(unsigned long nb, char c, int *count);
int		ft_printf(const char *str, ...);

#endif
