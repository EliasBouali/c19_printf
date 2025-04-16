#include <unistd.h>

int	ft_put_unsigned(unsigned int n)
{
	int		count;
	int		result;
	char	c;

	count = 0;
	if (n >= 10)
	{
		result = ft_put_unsigned(n / 10);
		if (result == -1)
			return (-1);
		count += result;
		result = ft_put_unsigned(n % 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	else
	{
		c = n + '0';
		result = write(1, &c, 1);
		if (result == -1)
			return (-1);
		count += result;
	}
	return (count);
}
