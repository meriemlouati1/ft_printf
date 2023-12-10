/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouati <mlouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:23:51 by mlouati           #+#    #+#             */
/*   Updated: 2023/12/10 23:22:03 by mlouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *count)
{	
	int	i;

	i = 0;
	if (!s)
	{	
		write (1, "(null)", 6);
		(*count) += 6;
		return ;
	}
	while (s[i])
	{
		write (1, &s[i], 1);
		(*count)++;
		i++;
	}
}
