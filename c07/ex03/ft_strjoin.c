/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:31:46 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/14 14:44:17 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while (*tab++)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_full_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		total += ft_strlen(sep);
		i++;
	}
	total -= ft_strlen(sep);
	return (total + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		full_len;
	int		i;

	if (size <= 0)
		return (0);
	full_len = ft_full_len(size, strs, sep);
	dest = malloc(full_len * 1);
	if (dest == '\0')
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(dest, sep);
			dest += ft_strlen(sep);
		}
	}
	*dest = '\0';
	return (dest);
}

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
