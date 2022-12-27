#include "ft_printf.h"

int	ft_printf_p(unsigned long int c)
{
	int	n;

	n = 0;
	if (!c)
	{
		n += write (1, "(nil)", 5);
		return (n);
	}
	ft_printf_c('0');
	ft_printf_c('x');
	return (ft_putnbr_n(c, "0123456789abcdef") + 2);
}
