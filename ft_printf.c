/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:21:18 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/18 16:38:27 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(const char *format, int i, va_list args)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format[i] == 'u')
		count += ft_put_unsigned(va_arg(args, unsigned int));
	else if (format[i] == 'x' || format[i] == 'X')
		count += ft_puthex(va_arg(args, unsigned int), format[i] == 'X');
	else if (format[i] == '%')
		count += ft_putchar('%');
	else if (format[i] == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else
		count += write(1, &format[i], 1);
	if (count == -1)
		return (-1);
	else
		return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] && (format[i + 1] == 'c'
				|| format[i + 1] == 's' || format[i + 1] == 'd'
				|| format[i + 1] == 'i' || format[i + 1] == 'u'
				|| format[i + 1] == 'x' || format[i + 1] == 'X'
				|| format[i + 1] == '%' || format[i + 1] == 'p'))
		{
			i++;
			count += ft_count(format, i, args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
