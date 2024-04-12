/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:34 by armolina          #+#    #+#             */
/*   Updated: 2024/04/12 10:50:35 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

unsigned int	find_digit(int n, int div)
{
	int	digit;

	digit = n / div;
	if (digit < 0)
		digit = digit * -1;
	return ((unsigned int)digit);
}

int	ft_putnbr(int n)
{
	int		div;
	char	digit;
	int		cnt;

	cnt = 0;
	if (n == 0)
	{
		return (write(1, "0", 1));
	}
	div = 1000000000;
	if (n < 0)
		cnt += write(1, "-", 1);
	while ((n / div) == 0)
		div = div / 10;
	while (div != 1 && n != 0)
	{
		digit = '0' + find_digit(n, div);
		cnt += write(1, &digit, 1);
		n = n % div;
		div = div / 10;
	}
	digit = '0' + find_digit(n, div);
	cnt += write(1, &digit, 1);
	return (cnt);
}

int	ft_putstr(const char *str)
{
	if (str)
		return (write(1, str, ft_strlen(str)));
	return (0);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

unsigned int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

int	ft_isInteger(long num)
{
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (num);
}

int	ft_putptr(void *ptr, const char *digits)
{
	uintptr_t	num;
	char		buffer[18];
	int			i;
	int			digit;

	buffer[0] = '0';
	buffer[1] = 'x';
	num = (uintptr_t)ptr;
	i = 17;
	while (i >= 2)
	{
		digit = num % 16;
		buffer[i] = digits[digit];
		num = num / 16;
		i--;
	}
	write(1, buffer, 18);
	return (18);
}

int	ft_puthex(int num, const char *digits)
{
	char	buffer[10];
	int		i;
	int		digit;

	if (!ft_isInteger(num))
		return (0);
	i = 9;
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
	write(1, &buffer[i], (10 - i));
	return (10 - i);
}
