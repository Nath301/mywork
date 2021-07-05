/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:36:37 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 16:49:49 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*dest)
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int dest_len;
	char	*cat_dest;
	int	i;

	cat_dest = dest;
	dest_len = ft_strlen(*dest);
	i = 0;
	while (*cat_dest && i++ < size)
		cat_dest++;
	while (*src)
	{
		*cat_dest++ = *src++;
		i++;
	}
	*cat_dest = '\0';
	return (dest);
}
