/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:13:46 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/10 14:22:27 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	_check_format(const char *str, va_list par, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_print_c((char) va_arg(par, int));
	else if (str[i] == 's')
		count += ft_print_s((char *) va_arg(par, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		count += ft_print_d((int) va_arg(par, int));
	else if (str[i] == 'u')
		count += ft_print_u((unsigned int) va_arg(par, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_print_x((unsigned int) va_arg(par, unsigned int), str[i]);
	else if (str[i] == 'p')
		count += ft_print_p((void *) va_arg(par, void *));
	else if (str[i] == '%')
		count += ft_print_c('%');
	return (count);
}

int	ft_printf(const char *input_str, ...)
{
	va_list	params;
	int		i;
	int		count;

	va_start(params, input_str);
	i = 0;
	count = 0;
	while (input_str[i])
	{
		if (input_str[i] == '%')
		{
			count += _check_format(input_str, params, ++i);
			if (count < 0)
				return (-1);
		}
		else
		{
			count += ft_print_c(input_str[i]);
			if (count < 0)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return (count);
}
