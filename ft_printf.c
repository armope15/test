#include"ft_printf.h"

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