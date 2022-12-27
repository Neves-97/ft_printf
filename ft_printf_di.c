#include "ft_printf.h"

int ft_printf_di(int nb)
{
    int n;

    n = 0;

    if (nb == -2147483648)
    {
        n += ft_printf_c('-');
        n += ft_printf_c('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        nb *= -1;
        n += ft_printf_c('-');
    }
    if (nb > 9)
    {
        n += ft_printf_di(nb / 10);
        n += ft_printf_di(nb % 10);
        return (n);
    }
    else
        n += ft_printf_c(nb + '0');
    return (n);
    
    
}