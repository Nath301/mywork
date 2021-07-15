/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:00:17 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/06 16:54:14 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
