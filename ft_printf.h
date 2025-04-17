#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int ft_printf(const char *format, ...);
int ft_print_ptr(void *ptr);
int	ft_put_unsigned(unsigned int n);
int	ft_putchar(char c);
int ft_puthex(unsigned int n, int is_upper);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
# endif
