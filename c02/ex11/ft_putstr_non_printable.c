/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:40:52 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 18:07:47 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char s)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	ft_putchar(base_16[s / 16]);
	ft_putchar(base_16[s % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
            ft_putchar('\\');
			ft_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
