/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:36:37 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/08 14:44:17 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	i;
	int				dlen;

	i = 0;
	n = size;
	dlen = ft_strlen(dest);
	if (n <= (unsigned int)dlen)
	{
		return ((unsigned int)ft_strlen(src) + size);
	}
	while (src[i] && i < n - dlen - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}
