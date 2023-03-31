/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:37:46 by roda-min          #+#    #+#             */
/*   Updated: 2022/12/27 14:05:20 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %x Prints a number in hexadecimal (base 16) lowercase format.

int	ft_printf_x(unsigned int nb)
{
	int	n;

	n = 0;
	n += ft_putnbr_n(nb, "0123456789abcdef");
	return (n);
}
