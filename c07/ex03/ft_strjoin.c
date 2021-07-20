/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:31:46 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/19 21:34:41 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src)
	{
		*d = *src;
		src++;
		d++;
	}
	*d = '\0';
	return (dest);
}

char	*dest_size(int size, char **strs, char *sep)
{
	char	*tab;
	int		dest_size;
	int		i;

	i = -1;
	dest_size = 0;
	while (strs[++i])
		dest_size += ft_strlen(strs[i]);
	dest_size += (size - 1) * ft_strlen(sep) + 1;
	tab = malloc((dest_size) * sizeof(char));
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		a;

	i = -1;
	if (size <= 0)
		return (0);
	dest = dest_size(size, strs, sep);
	if (!dest)
		return (NULL);
	i = -1;
	a = -1;
	while (++a < size)
		dest[a] = '\0';
	while (++i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat(dest, sep);
	}
	return (dest);
}
