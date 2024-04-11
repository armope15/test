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

int select_option(va_list va , char c)
{
	if(!contains( "%cspdiuxX" , c))
		return (0);
	return (1000);
}

int ft_printf(const char *str , ...)
{
	va_list va;
	va_start(va,str);
	int s;
	int c; 
	s = 0;
	c = 0;
	while (*str != '\0')
	{
		if(s == 1)
		{
			c += select_option(va , *str);
			s=0;
		}
		else 
		{
			if(*str == '%')
				s = 1;
			else
				c += ft_putchar(*str);			
		}
		str++;
	}
	return (c);
}

