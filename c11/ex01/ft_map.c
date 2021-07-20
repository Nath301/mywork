/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:52:27 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/18 15:15:14 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*dest;

	i = -1;
	dest = malloc(sizeof(int) * length + 1);
	while (++i < length)
		dest[i] = (*f)(tab[i]);
	return (dest);
}
