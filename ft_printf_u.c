#include "ft_printf.h"

int ft_printf_u(unsigned int nb)
{
    int n;

    n = 0;

    if (n >= 10)
    {
        n += ft_printf_u(nb / 10);
        n += ft_printf_u(nb % 10);
    }
    else
        n += ft_printf_c(nb + '0');
    return (n);
}