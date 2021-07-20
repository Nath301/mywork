/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:40:18 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/20 17:12:58 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_in_base(char *base, char to_find)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (to_find == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	nombre;
	int				signe;
	char			*charptr;
	int				i;

	nombre = 0;
	signe = 1;
	i = -1;
	charptr = str;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	while (*charptr == '-' || *charptr == '+')
	{
		if (*charptr == '-')
			signe *= -1;
		charptr++;
	}
	while (charptr[++i])
	{
		nombre *= ft_strlen(base);
		nombre += (is_in_base(base, charptr[i]));
	}
	return (nombre * signe);
}
