/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:39:05 by roda-min          #+#    #+#             */
/*   Updated: 2022/12/27 14:05:15 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %X Prints a number in hexadecimal (base 16) uppercase format.

int	ft_printf_xx(unsigned int nb)
{
	int	n;

	n = 0;
	n += ft_putnbr_n(nb, "0123456789ABCDEF");
	return (n);
}
