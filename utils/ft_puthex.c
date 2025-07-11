/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:50:50 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/10 14:39:17 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex(unsigned int nbr, char *base)
{
	int		count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_puthex(nbr / 16, base);
		count += ft_puthex(nbr % 16, base);
	}
	else
		count += ft_print_c(base[nbr]);
	return (count);
}
