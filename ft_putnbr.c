#include <unistd.h>

int ft_putnbr(int n)
{
    int     count;
    char    c;

	count = 0;
    if (n == -2147483648)
        return (write(1, "-2147483648", 11));
    if (n < 0)
    {
        count += write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        count += ft_putnbr(n / 10);
    c = (n % 10) + '0';
    count += write(1, &c, 1);
    return (count);
}

