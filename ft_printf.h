/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:21:50 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/18 16:21:53 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_ptr(void *ptr);
int	ft_put_unsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n, int is_upper);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
#endif
