/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:02:10 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 14:08:21 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*cat_dest;

	cat_dest = dest;
	while (*cat_dest)
		cat_dest++;
	while (*src && nb > 0)
	{
		*cat_dest++ = *src++;
		nb--;
	}
	return (dest);
}
