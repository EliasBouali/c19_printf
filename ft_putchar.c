#include <unistd.h>

int	ft_putchar(char c)
{
	int	result; 
	
	result = write(1,&c,1);
	if (result == -1)
		return (-1);
	return (1);// car dans printf on a besoin qu'elle retourne le nombre de caractere
}
