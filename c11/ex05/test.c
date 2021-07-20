#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_unsigned;
	unsigned int	len;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr_unsigned = (unsigned int)(-1 * nbr);
	}
	else
		nbr_unsigned = (unsigned int)nbr;
	len = ft_strlen(base);
	if (nbr_unsigned < len)
	{
		write(1, &base[nbr_unsigned % len], 1);
	}
	else
	{
		ft_putnbr_base((nbr_unsigned / len), base);
		ft_putnbr_base((nbr_unsigned % len), base);
	}
}

int	ft_atoi(char *str)
{
	unsigned int	number;
	int				sign;
	int				i;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) && str[i] == 32)
		i++;
	while (str[i] == '+' && str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * sign);
}

void add(int val1, int val2)
{
    ft_putnbr_base((val1 + val2), "0123456789");
}

void sub(int val1, int val2)
{
    ft_putnbr_base((val1 - val2), "0123456789");
}

void mult(int val1, int val2)
{
    ft_putnbr_base((val1 * val2), "0123456789");
}

void div(int val1, int val2)
{
    if (val2 != 0)
        ft_putnbr_base((val1 % val2), "0123456789");
    else
        write(1, "Stop : division by zero", 23);
}

void modulo(int val1, int val2)
{
    if (val2 != 0)
        ft_putnbr_base((val1 % val2), "0123456789");
    else
        write(1, "Stop : modulo by zero", 21);
}

void ft_operation(char c, int val1, int val2)
{
    if (c != '+' && c != '-' && c != '/' && c != '%' && c != '*')
        write(1, "0", 1);
    else
    {
        if (c == '+')
            return(add(val1, val2));
        if (c == '-')
            return(sub(val1, val2));
        if (c == '/')
            return(div(val1, val2));
        if (c == '*')
            return(mult(val1, val2));
        if (c == '%')
            return(modulo(val1, val2));
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (0);
    if (ft_strlen(argv[2]) != 1)
    {
        write(1, "0\n", 2);
        return (0);
    }
    if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' && 
				argv[2][0] != '%' && argv[2][0] != '*')
    {
        write(1, "0\n", 2);
        return (0);
    }
    ft_operation(argv[2][0], ft_atoi(argv[1]), ft_atoi(argv[3]));
    write(1, "\n", 1);
    return (0);
}