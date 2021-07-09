/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:19:12 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/09 09:09:16 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	int				count;

	i = 1;
	count = 0;
	if (nb < 3)
		return (0);
	while (i <= (unsigned int)nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}
