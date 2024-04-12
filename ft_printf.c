/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:29 by armolina          #+#    #+#             */
/*   Updated: 2024/04/12 10:50:32 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	contains(char *str, char c)
{
	int	r;

	r = 0;
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	select_option(va_list va, char chr)
{
	if (!contains("%cspdiuxX", chr))
		return (0);
	if (chr == '%')
		return ((int)ft_putchar(chr));
	if (chr == 'c')
		return ((int)ft_putchar(va_arg(va, int)));
	if (chr == 'd' || chr == 'i')
		return ((int)ft_putnbr(va_arg(va, int)));
	if (chr == 'u')
		return ((int)ft_putnbr(ft_abs(va_arg(va, unsigned int))));
	if (chr == 's')
		return ((int)ft_putstr((const char *)va_arg(va, const char *)));
	if (chr == 'p')
		return ((int)ft_putptr(va_arg(va, void *), "0123456789abcdef"));
	if (chr == 'x')
		return ((int)ft_puthex(va_arg(va, int), "0123456789abcdef"));
	if (chr == 'X')
		return ((int)ft_puthex(va_arg(va, int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	int		s;
	int		cnt;

	va_start(va, str);
	s = 0;
	cnt = 0;
	while (*str != '\0')
	{
		if (s == 1)
		{
			cnt += select_option(va, *str);
			s = 0;
		}
		else
		{
			if (*str == '%')
				s = 1;
			else
				cnt += ft_putchar(*str);
		}
		str++;
	}
	va_end(va);
	return (cnt);
}
