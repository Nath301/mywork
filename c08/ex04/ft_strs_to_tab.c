/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:22:02 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/14 21:06:42 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;
	int		i;

	size = ft_strlen(src) + 1;
	copy = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			i;

	i = -1;
	t = malloc((ac + 1) * sizeof(t_stock_str));
	if (ac < 0)
		ac = 0;
	if (!t)
		return (NULL);
	while (++i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(av[i]);
	}
	t[i].str = 0;
	return (t);
}
