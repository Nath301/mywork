/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 08:29:02 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 18:40:28 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char s)
{
	if (s >= '0' && s <= '9')
		return (1);
	return (0);
}

int	ft_is_lowercase(char s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	return (0);
}

int	ft_is_uppercase(char s)
{
	if (s >= 'A' && s <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (ft_is_lowercase(str[i]) == 1 && i == 0)
		{
			str[i] += 32;
			i++;
		}
		else if (ft_is_digit(str[i]) == 1)
		{
			i++;
		}
		else
		{
			str[i + 1] += 32;
			i++;
		}
		str[i];
	}
	return (str);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
    char s[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n",s);
    ft_strcapitalize(s);
    printf("%s",s);
}
