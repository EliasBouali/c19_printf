#include <stdlib.h>
#include "libft_printf.h"

int		ft_printf(const	char *format,...)// le format est une convention et les ... nous permet d'accepte un nombre variable d'arguments
{
	va_list args;// args convention pour arguments.
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args,format);
	while(format[i])
	{
		if(format == '%' && format[i + 1])
		{
			i++;
			if(format[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			else if(format[i] == 's')
				count += ft_putstr(va_arg(args,char *));
			else if(format[i] == 'd' || format == 'i')
				count += ft_putnbr(va_arg(args,int));
			else if(format[i] == 'u')
				count += ft_put_unsigned(va_arg(args,unsigned int));
			else if(format[i] == 'x')
	      count +=
			else
				count += whrite(1,&format[i],1);
		}
		i++;
	}
	va_end(args);
	reurn (count);

}
