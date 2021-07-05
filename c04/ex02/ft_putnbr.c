/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:21:43 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 17:25:28 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void	ft_putchar(char d)
	{
		write(1, &d, 1);
	}

	void	ft_putnbr(int nb)
	{
		unsigned int	n;

		if (nb < 0)
		{
			ft_putchar('-');
			n = -nb;
		}
		else
			n = nb;
		if (n > 9)
		{
			ft_putnbr(n / 10);
			n %= 10;
		}
		ft_putchar(n + '0');
	}
}
