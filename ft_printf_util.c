/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:34 by armolina          #+#    #+#             */
/*   Updated: 2024/04/12 16:18:22 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
	}
	if (n == 0) // Si n es 0
	{
		i += ft_putchar('0');
	}
	else if (n > 9) // Si n tiene más de un dígito
	{
		i += ft_putnbr(n / 10);        // Llamada recursiva con el cociente
		i += ft_putchar(n % 10 + '0'); // Imprimir el dígito de la unidad
	}
	else // Si n es un solo dígito
	{
		i += ft_putchar(n + '0'); // Imprimir n como un solo dígito
	}
	return (i); // Devolver el número total de caracteres impresos
}

int	ft_putstr(const char *str)
{
	if (!str)
		str = "(null)";
	if (str)
		return (write(1, str, ft_strlen(str)));
	return (0);
}

int	ft_putptr(void *ptr, const char *digits)
{
	unsigned long	num;

	num = (unsigned long)ptr;
	if (!ptr || !num || num <= 0 || num == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	return (ft_puthex(num, digits) + 2);
}

int	ft_puthex(unsigned long num, const char *digits)
{
	char	buffer[16];
	int		i;
	int		digit;

	if (num == 0)
		return (write(1, "0", 1));
	i = 15;
	while (i >= 0)
	{
		digit = num % 16;
		buffer[i] = digits[digit];
		num = num / 16;
		i--;
	}
	i = 0;
	while (buffer[i] == '0')
		i++;
	write(1, &buffer[i], (16 - i));
	return (16 - i);
}
int	ft_putnnbr(unsigned int n)
{
	int i;

	i = 0;
	if (n == 0) // Si n es 0
	{
		i += ft_putchar('0');
	}
	else if (n > 9) // Si n tiene más de un dígito
	{
		i += ft_putnbr(n / 10);        // Llamada recursiva con el cociente
		i += ft_putchar(n % 10 + '0'); // Imprimir el dígito de la unidad
	}
	else // Si n es un solo dígito
	{
		i += ft_putchar(n + '0'); // Imprimir n como un solo dígito
	}
	return (i); // Devolver el número total de caracteres impresos
}