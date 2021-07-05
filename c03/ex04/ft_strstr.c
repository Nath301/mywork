/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:09:21 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 16:13:16 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *d_src;
	int	i;

	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (*to_find && str[i] == to_find[i])
			{
				i++;
				if (to_find[i] == '\0')
					return (str);
			}
		}
		str++;
	}
	return (0);
}
#include <string.h>
#include <stdio.h>
int main()
{
	char to_find[10] = "ahh";
	char str[80] = "ahahahahahhahahah";
	printf("strstr:   %s\n",strstr(str,to_find));
	printf("ft_strstr:%s\n",ft_strstr(str,to_find));
}
