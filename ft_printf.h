/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:59:22 by erfarias          #+#    #+#             */
/*   Updated: 2025/07/10 14:41:24 by erfarias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // write
# include <stdlib.h> // malloc, free, size_t
# include <string.h>
# include <stdarg.h> // va_start, va_arg, va_copy, va_end

int	ft_printf(const char *input_str, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_putptr(void *ptr);
int	ft_puthex(unsigned int nbr, char *base);

int	ft_print_c(char c);
int	ft_print_s(char *str);
int	ft_print_d(int nbr);
int	ft_print_u(unsigned int nbr);
int	ft_print_p(void *ptr);
int	ft_print_x(unsigned int nbr, int format);

#endif
