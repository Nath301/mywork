/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:28:45 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/09 09:07:57 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb < 2)
		return (0);
	while (i <= nb)
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		ft_is_prime(nb++);
	return (nb);
}
