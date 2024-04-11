#include"ft_printf.h"

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
	int cnt;

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

int ft_putstr(const char *str)
{
	if (str)
		return (write(1, str, ft_strlen(str)));
	return (0);
}

int ft_putchar(char c)
{
	return (write(1,&c,1));
}
