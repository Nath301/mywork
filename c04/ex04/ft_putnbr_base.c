/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:02:12 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/11 11:16:36 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int	ft_check_base_error(char *str)
{
	int	i;
	int	c;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (str[i] == '\0' || len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || (str[i] >= 9 && str[i] <= 13))
			return (0);
		c = 1;
		while (str[i + c] != '\0')
		{
			if (str[i + c] == str[i])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_unsigned;
	unsigned int	len;

	if (ft_check_base_error(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsigned = (unsigned int)(-1 * nbr);
		}
		else
			nbr_unsigned = (unsigned int)nbr;
		len = ft_strlen(base);
		if (nbr_unsigned < len)
		{
			write(1, &base[nbr_unsigned % len], 1);
		}
		else
		{
			ft_putnbr_base((nbr_unsigned / len), base);
			ft_putnbr_base((nbr_unsigned % len), base);
		}
	}
}
