/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:16:08 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/22 16:50:54 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int check_double(char *s1, int i)
{
	int j;

	j = 1;
	while (s1[i - j])
	{
		if (s1[i - j] == s1[i])
			return (0);
		j++;
	}
	return (1);
}

void inter(char *s1, char *s2)
{
	int i;
	int a;

	i = 0;
	while (s1[i])
	{
		a = 0;
		while (s2[a])
		{
			if (s1[i] == s2[a] && check_double(s1,i))
			{
				ft_putchar(s1[i]);
				break;
			}
			else
				a++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
