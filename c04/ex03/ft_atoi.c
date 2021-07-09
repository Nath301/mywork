int	ft_atoi(char *str)
{
	int		number;
	int		signe;
	char	*s;

	number = 0;
	signe = 1;
	s = str;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			signe *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		number *= 10;
		number += (int)(*s - '0');
		s++;
	}
	return (number * signe);
}
