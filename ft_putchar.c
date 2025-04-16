/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:31:41 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/16 18:31:43 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	int	result; 
	
	result = write(1,&c,1);
	if (result == -1)
		return (-1);
	return (1);// car dans printf on a besoin qu'elle retourne le nombre de caractere
}
