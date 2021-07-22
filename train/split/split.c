/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 10:04:58 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/22 12:12:36 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
	if (c == ' ' || c  == '\n' || c == '\t')
		return (1);
	return (0);
}

int count_word(char *str)
{
	int i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (is_space(str[i]))
			i++;
		else
		{
			word_count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (word_count);
}

char *insert_word(int word_len, char *dest, char *str, int i)
{
	int	k;

	k = 0;
	dest = (char *)malloc((word_len + 1) * sizeof(char *));
	while (word_len)
	{
		dest[k] = str[i - word_len];
		k++;
		word_len--;
	}
	dest[k] = '\0';
	return (dest);
}

char **ft_split(char *str)
{
	char **dest;
	int j;
	int i;
	int word_len;
	int	word_count;

	i = 0;
	j = -1;
	word_len = 0;
	word_count = count_word(str);
	dest = (char **)malloc((word_count + 1) * sizeof(char **));
	while (++j < word_count && str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		while (str[i] && !(is_space(str[i])))
		{
			word_len++;
			i++;
		}
		dest[j] = insert_word(word_len, dest[j], str, i);
		word_len = 0;
	}
	return (dest);
}

int main()
{
	int i;
	char **tab;

	i = 0;
	tab = ft_split("Salut comment elle va la LOLO     uew ");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
