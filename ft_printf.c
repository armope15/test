#include"ft_printf.h"

int contains(char *str , char c )
{
	int r;

	r = 0;
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int select_option(va_list va , char chr)
{
	if(!contains( "%cspdiuxX" , chr))
		return (0);
	if(chr == '%')
		return ((int)ft_putchar(chr));
	if(chr == 'd')
		return ((int)ft_putnbr(va_arg(va , int)));
	if(chr == 's')
		return ((int)ft_putstr((const char *)va_arg(va , const char *)));
	
	return (0);
}

int ft_printf(const char *str , ...)
{
	va_list va;
	va_start(va,str);
	int s;
	int cnt; 
	s = 0;
	cnt = 0;
	while (*str != '\0')
	{
		if(s == 1)
		{
			cnt += select_option(va , *str);
			s=0;
		}
		else 
		{
			if(*str == '%')
				s = 1;
			else
				cnt += ft_putchar(*str);			
		}
		str++;
	}
	return (cnt);
}

