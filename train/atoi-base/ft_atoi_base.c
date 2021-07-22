/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:13:22 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/22 14:25:02 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_in_base(char c, char *base, int str_base)
{
	int	i;

	i = 0;
	while (i < str_base)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int nbr;
	char *base;

	i = 0;
	sign = 1;
	nbr = 0;
	base = "0123456789abcdef";
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
	while (is_in_base(str[i], base, str_base) != -1)
	{
		nbr =  nbr * str_base + is_in_base(str[i], base, str_base);
		i++;
	}
	return (nbr * sign);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("-24", 4));
}

