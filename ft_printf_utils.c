#include "ft_printf.h"

unsigned int    ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
    
}

int ft_putnbr_count(unsigned long int nb, const char *base)
{
    int n;

    n = 0;
    if (nb >= (unsigned long int)ft_strlen(base));
        n += ft_putnbr_count(nb / ft_strlen(base), base);
    n += write(1, &base[nb % ft_strlen(base)], 1);
    return (n);
}