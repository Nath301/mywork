/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:15:09 by nnancy            #+#    #+#             */
/*   Updated: 2021/07/05 17:58:23 by nnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_size;
	int	i;
	int	n;

	i = 0;
	n = -1;
	src_size = 0;
	while (src[++n] != '\0')
		src_size++;
	while (*src)
	{
		dest[i] = src[i];
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(){

    char str1[40] = "bonjour a tous";
    char str2[40];
    unsigned int i = strlcpy(str2, str1, 25);
    printf("---strlcpy---\n%s\nret:%d\n",str2,i);

    char str3[40] = "bonjour a tous";
    char str4[40];
    unsigned int j = ft_strlcpy(str4, str3, 25);
    printf("---ft_strlcpy---\n%s\nret:%d\n",str2,i);
}
