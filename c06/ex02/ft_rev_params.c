/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:24:07 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/07 20:25:06 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i-- > 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (str[0])
		ft_putchar(*str++);
}
