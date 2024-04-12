/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:11 by armolina          #+#    #+#             */
/*   Updated: 2024/04/12 10:52:33 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);

unsigned int	find_digit(int n, int div);
int				ft_putnbr(int n);
unsigned int	ft_abs(int n);
int				ft_putptr(void *ptr, const char *digits);

size_t			ft_strlen(const char *s);
int				ft_putstr(const char *str);
int				ft_isInteger(long num);
int				ft_puthex(int num, const char *digits);
#endif