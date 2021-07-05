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

void	ft_hexa(unsigned char s)
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
		if (!(*str <= 33 && *str == 127))
		{
			ft_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int main(){
    char str[128];
    for (int i=1; i < 128; i++)
        str[i-1] = i;

    ft_putstr_non_printable(str);
    ft_putchar('\n');
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
}

