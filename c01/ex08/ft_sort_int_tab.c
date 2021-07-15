/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:35:19 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/06 16:41:50 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	i;
	int	n;

	if (size < 2)
		return ;
	index = tab[--size];
	i = 0;
	n = -1;
	while (++n < size)
		if (tab[n] < index)
			ft_swap(&tab[i++], &tab[n]);
	if (tab[i] > tab[size])
		ft_swap(&tab[i], &tab[size]);
	ft_sort_int_tab(tab, i);
	ft_sort_int_tab(tab + i + 1, size - i);
}
