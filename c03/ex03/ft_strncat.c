/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:02:10 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/07 22:31:02 by nnancy           ###   ########.fr       */
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
	*cat_dest = '\0';
	return (dest);
}
