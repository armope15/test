/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:11 by armolina          #+#    #+#             */
/*   Updated: 2024/04/12 15:16:41 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);

unsigned int	find_digit(int n, int div);
int				ft_putnbr(int n);
int				ft_putnnbr(unsigned int n);
unsigned int	ft_abs(int n);

size_t			ft_strlen(const char *s);
int				ft_putstr(const char *str);
int				ft_is_integer(long num);
int				ft_putptr(unsigned long ptr, const char *digits);
int				ft_puthex(unsigned int num, const char *digits);
#endif