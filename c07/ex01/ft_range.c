/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:46:14 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/14 14:41:28 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
