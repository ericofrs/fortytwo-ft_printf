/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:05:37 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/10 15:14:50 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_p(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_print_s("(nil)"));
	count = 0;
	count += ft_print_s("0x");
	if (count < 0)
		return (-1);
	count += ft_putptr(ptr);
	if (count < -1)
		return (-1);
	return (count);
}
