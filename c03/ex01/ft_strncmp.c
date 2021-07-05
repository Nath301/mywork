/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:46:57 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 11:59:06 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && *s1 == *s2)
	{
		if (n == 0)
			return (0);
		s1++;
		n--;
	}
	return (*s1 - *s2);
}