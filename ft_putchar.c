#include <unistd.h>

int	ft_putchar(char c)
{
	write(1,&c,1);
return (1);// car dans printf on a besoin qu'elle retourne le nombre de caractere
}
