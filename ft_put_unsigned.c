#include "libft_printf"

void ft_put_unsigned(unsigned int n)
{
    if (n >= 10)
    {
        ft_put_unsigned(n / 10);
        ft_put_unsigned(n % 10);
    }
    else
    {
        ft_putchar(n + '0');
    }
}
