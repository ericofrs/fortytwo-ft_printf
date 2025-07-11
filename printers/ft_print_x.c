/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:11:17 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/10 14:57:04 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_x(unsigned int nbr, int is_lower)
{
	char	*chars;

	if (is_lower == 'x')
		chars = "0123456789abcdef";
	else
		chars = "0123456789ABCDEF";
	return (ft_puthex(nbr, chars));
}
