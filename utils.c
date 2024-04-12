/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:59:28 by armolina          #+#    #+#             */
/*   Updated: 2024/04/12 14:17:04 by armolina         ###   ########.fr       */
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

int	ft_is_integer(long num)
{
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (num);
}

unsigned int	ft_abs(int num)
{
	if (num < 0 && num > INT_MIN)
		return (num * -1);
	if (num == INT_MIN)
		return (0);
	return (num);
}

unsigned int	find_digit(int n, int div)
{
	int	digit;

	digit = n / div;
	if (digit < 0)
		digit = digit * -1;
	return ((unsigned int)digit);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
