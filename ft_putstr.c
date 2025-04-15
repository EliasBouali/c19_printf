#include <unistd.h>

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if(!s)
		return(write(1, "(null)",6));// ft_printf("%s",NULL) doit afficher null 
	while(s[i])
	{
		write(1,&s[i],1);
		i++;
	}
	return (i);
}
