/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:31:52 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/16 18:31:53 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned int n, int is_upper)
{
    const char *hex_digits;
    int count = 0;
    int result;

    if (is_upper)
        hex_digits = "0123456789ABCDEF";
    else
        hex_digits = "0123456789abcdef";

    if (n >= 16)
    {
        result = ft_puthex(n / 16, is_upper);
        if (result == -1)
            return (-1);
        count += result;
    }
    result = write(1, &hex_digits[n % 16], 1);
    if (result == -1)
        return (-1);
    count += result;

    return (count);
}
