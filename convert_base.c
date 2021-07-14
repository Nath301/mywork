int		ft_atoi_base(char *str, char *base, int size)
{
	int i;
	int n;
	int negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	while ((i = ft_in_base(*str++, base)) >= 0)
		n = n * size + i;
	if (negative)
		n *= -1;
	return (n);
}

int		ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	n = ft_checkbase(base_from);
	if (!(n && (size = ft_checkbase(base_to))))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = (n < 0) ? -n : n;
	i = ft_nbrlen(nb, size) + ((n < 0) ? 1 : 0);
	if (!(dest = malloc((i + 1) * sizeof(char))))
		return (NULL);
int		ft_atoi_base(char *str, char *base, int size)
{
	int i;
    	int n;
        	int negative;

            	while ((*str >= 9 && *str <= 13) || *str == ' ')
                		str++;
                        	negative = 0;
                            	while (*str == '-' || *str == '+')
                                		if (*str++ == '-')
                                        			negative = 1 - negative;
                                                    	n = 0;
                                                        	while ((i = ft_in_base(*str++, base)) >= 0)
                                                            		n = n * size + i;
                                                                    	if (negative)
                                                                        		n *= -1;
                                                                                	return (n);
                                                                                    }

                                                                                    int		ft_nbrlen(unsigned int n, unsigned int base_size)
                                                                                    {
                                                                                    	if (n < base_size)
                                                                                        		return (1);
                                                                                                	return (1 + ft_nbrlen(n / base_size, base_size));
                                                                                                    }

                                                                                                    char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
                                                                                                    {
                                                                                                    	char			*dest;
                                                                                                        	unsigned int	nb;
                                                                                                            	int				size;
                                                                                                                	int				i;
                                                                                                                    	int				n;

                                                                                                                        	n = ft_checkbase(base_from);
                                                                                                                            	if (!(n && (size = ft_checkbase(base_to))))
                                                                                                                                		return (NULL);
                                                                                                                                        	n = ft_atoi_base(nbr, base_from, n);
                                                                                                                                            	nb = (n < 0) ? -n : n;
                                                                                                                                                	i = ft_nbrlen(nb, size) + ((n < 0) ? 1 : 0);
                                                                                                                                                    	if (!(dest = malloc((i + 1) * sizeof(char))))
                                                                                                                                                        		return (NULL);
                                                                                                                                                                	dest[i] = '\0';
                                                                                                                                                                    	while (i--)
                                                                                                                                                                        	{
                                                                                                                                                                            		dest[i] = base_to[nb % size];
                                                                                                                                                                                    		nb /= size;
                                                                                                                                                                                            	}
                                                                                                                                                                                                	if (n < 0)
                                                                                                                                                                                                    		dest[0] = '-';
                                                                                                                                                                                                            	return (dest);
                                                                                                                                                                                                                dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
