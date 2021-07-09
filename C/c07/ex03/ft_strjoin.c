/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:31:46 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/08 18:53:07 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_tablen(char *tab)
{
	int i;

	i = 0;
	while (*tab++)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*cat_dest;

	cat_dest = dest;
	while (*cat_dest)
		cat_dest++;
	while (*src)
		*cat_dest++ = *src++;
	*cat_dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *dest;
	int	n;
	int full_len;
	int strs_len;

	n = -1;
	i = -1;
	if (size == 0)
		return (0);
	strs_len = ft_tablen(*strs);
	while (++i < strs_len)
		full_len += ft_tablen(strs[i]);
	i = 0;
	dest = malloc(sizeof(char) * full_len);
	while (++n < ft_tablen(strs[i]))
	{
		ft_strcat(dest, strs[i]);
		ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
