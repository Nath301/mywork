/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:58:30 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/14 14:39:30 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str++)
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
