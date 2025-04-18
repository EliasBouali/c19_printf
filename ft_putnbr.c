/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:32:03 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/18 16:37:22 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	safe_add(int *count, int value)
{
	if (value == -1)
		return (-1);
	*count += value;
	return (0);
}

int	ft_putnbr(int n)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		if (safe_add(&count, write(1, "-", 1)) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if (safe_add(&count, ft_putnbr(n / 10)) == -1)
			return (-1);
	}
	c = (n % 10) + '0';
	if (safe_add(&count, write(1, &c, 1)) == -1)
		return (-1);
	return (count);
}
