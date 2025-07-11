/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:07:02 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/09 18:09:46 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_d(int n)
{
	int	count;

	count = 0;
	count += ft_putnbr(n);
	if (count < 0)
		return (-1);
	return (count);
}
