void    ft_ultimate_div_mod (int *a, int *b)
{
    int n;
    n = *a;

    *a /= *b;
    *b = n % *b;
}