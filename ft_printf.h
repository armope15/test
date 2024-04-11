#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);

unsigned int	find_digit(int n, int div);
int				ft_putnbr(int n);

size_t	ft_strlen(const char *s);
int ft_putstr(const char *str);

#endif