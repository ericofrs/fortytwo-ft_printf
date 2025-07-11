/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:54:32 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/09 17:56:43 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_print_c(n + '0');
	return (count);
}
