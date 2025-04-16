/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:31:15 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/16 18:31:17 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count(const char *format, int i, va_list args)
{
	int	count;
	int	result;

	if (format[i] == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (format[i] == 'd' || format[i] == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (format[i] == 'u')
		result += ft_put_unsigned(va_arg(args, unsigned int));
	else if (format[i] == 'x' || format[i] == 'X')
		result += ft_puthex(va_arg(args, unsigned int), format[i] == 'X');
	else if (format[i] == '%')
		result += ft_putchar('%');
	else if (format[i] == 'p')
		result += ft_print_ptr(va_arg(args, uintptr_t));
	else
		result += whrite(1, &format[i], 1);
	if (result == -1)
		return (-1);
	else
		return (count += result);
}

int	ft_printf(const char *format, ...)
// le format est une convention et les ... nous permet d'accepte un nombre variable d'arguments
{
	va_list args; // args convention pour arguments.
	int i;
	int count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] && (format[i + 1] == 'c'
				|| format[i + 1] == 's' || format[i + 1] == 'd' || format[i
				+ 1] == 'i' || format[i + 1] == 'u' || format[i
				+ 1] == 'x' format[i + 1] == 'X' format[i + 1] == '%' format[i
				+ 1] == 'p'))
		{
			i++;
			count += ft_count(format, i, args);
		}
		i++;
	}
	va_end(args);
	reurn(count);
}
