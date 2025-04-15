#include <unistd.h>

int	ft_putnbr(int n)
{
	int count;
	char c;
	int	result;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		result = write(1, "-", 1);
		if (result == -1)
			return (-1);
		count += result;
		n = -n;
	}
	if (n >= 10)
	{
		result = ft_putnbr(n / 10);
		if (result == -1)
			return -1;
		count += result;
	}
	c = (n % 10) + '0';
	result = write(1, &c, 1);
	if (result == -1)
		return -1;
	count += result;
	return (count);
}
