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

char    ft_strupcase(char str)
{
    if (str >= 'a' && str <= 'z')
        str -= 32;
    return (str);
}

char    *ft_strlowcase(char *str)
{
    int    i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

int    ft_str_is_alpha(char str)
{
    if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')))
        return (0);
    return (1);
}

int ft_str_is_digit(char str)
{
  if (str >= '0' && str <= '9')
    return (1);
  return (0);
}

char    *ft_strcapitalize(char *str)
{
    int    i;

    i = 0;
    t_strlowcase(str);
    if (ft_str_is_alpha(str[0]))
    {
        ft_strupcase(str[0]);
    }
    while (str[i] != 0)
    {
        if (!ft_str_is_alpha(str[i - 1]) && !ft_str_is_digit(str[i - 1]))
        {
            str[i] = ft_strupcase(str[i]);
        }
        i++;
    }
    return (str);
}
