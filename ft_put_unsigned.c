/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:32:24 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/16 18:32:26 by ebouali          ###   ########.fr       */
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

int	ft_put_unsigned(unsigned int n)
{
	int		count = 0;
	char	c;

	if (n >= 10)
	{
		if (safe_add(&count, ft_put_unsigned(n / 10)) == -1)
			return (-1);
		if (safe_add(&count, ft_put_unsigned(n % 10)) == -1)
			return (-1);
	}
	else
	{
		c = n + '0';
		if (safe_add(&count, write(1, &c, 1)) == -1)
			return (-1);
	}
	return (count);
}

