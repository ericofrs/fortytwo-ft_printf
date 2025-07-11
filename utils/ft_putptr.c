/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:58:00 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/10 15:15:20 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_puthex_ptr(unsigned long n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthex_ptr(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	address;

	address = (unsigned long)ptr;
	count = 0;
	count += ft_puthex_ptr(address);
	return (count);
}
