/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:31:29 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/19 17:50:37 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_control_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_control_charset(str[i], charset))
			i++;
		else
		{
			word_count++;
			while (str[i] && !ft_control_charset(str[i], charset))
				i++;
		}
	}
	return (word_count);
}

char	*ft_insert_word(char *dest, char *str, int word_len, int i)
{
	int	k;

	k = 0;
	dest = (char *)malloc((word_len + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (word_len)
	{
		dest[k] = str[i - word_len];
		k++;
		word_len--;
	}
	dest[k] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**dest;
	int		word_len;

	i = 0;
	j = -1;
	word_len = 0;
	dest = (char **)malloc((ft_word_count(str, charset) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (++j < ft_word_count(str, charset) && str[i])
	{
		while (str[i] && ft_control_charset(str[i], charset))
			i++;
		while (str[i] && !ft_control_charset(str[i], charset))
		{
			word_len++;
			i++;
		}
		dest[j] = ft_insert_word(dest[j], str, word_len, i);
		word_len = 0;
	}
	dest[j] = 0;
	return (dest);
}
