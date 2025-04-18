#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char *str = "Elias";
	char *null_str = NULL;
	int i = 42;
	int neg = -1337;
	unsigned int u = 3000000000U;
	void *ptr = &i;
	void *null_ptr = NULL;

	// %c - char
	ft_printf("ft_printf %%c:\n");
	ft_printf("1: %c\n", 'X');
	ft_printf("2: %c\n", 65);
	ft_printf("3: %c\n", c);
	printf("printf %%c:\n");
	printf("1: %c\n", 'X');
	printf("2: %c\n", 65);
	printf("3: %c\n", c);

	// %s - string
	ft_printf("\nft_printf %%s:\n");
	ft_printf("1: %s\n", str);
	ft_printf("2: %s\n", "");
	ft_printf("3: %s\n", null_str);
	printf("printf %%s:\n");
	printf("1: %s\n", str);
	printf("2: %s\n", "");
	printf("3: %s\n", null_str);

	// %d / %i - integers
	ft_printf("\nft_printf %%d / %%i:\n");
	ft_printf("1: %d\n", i);
	ft_printf("2: %i\n", neg);
	ft_printf("3: %d\n", -2147483648);
	printf("printf %%d / %%i:\n");
	printf("1: %d\n", i);
	printf("2: %i\n", neg);
	printf("3: %d\n", -2147483648);

	// %u - unsigned
	ft_printf("\nft_printf %%u:\n");
	ft_printf("1: %u\n", u);
	ft_printf("2: %u\n", 0);
	ft_printf("3: %u\n", -1);
	printf("printf %%u:\n");
	printf("1: %u\n", u);
	printf("2: %u\n", 0);
	printf("3: %u\n", -1);

	// %x / %X - hex
	ft_printf("\nft_printf %%x / %%X:\n");
	ft_printf("1: %x\n", i);
	ft_printf("2: %x\n", 255);
	ft_printf("3: %X\n", 255);
	printf("printf %%x / %%X:\n");
	printf("1: %x\n", i);
	printf("2: %x\n", 255);
	printf("3: %X\n", 255);

	// %% - percent sign
	ft_printf("\nft_printf %%:\n");
	ft_printf("1: %%\n");
	ft_printf("2: ABC %% DEF\n");
	ft_printf("3: 100%%%% OK\n");
	printf("printf %%:\n");
	printf("1: %%\n");
	printf("2: ABC %% DEF\n");
	printf("3: 100%%%% OK\n");

	// %p - pointer
	ft_printf("\nft_printf %%p:\n");
	ft_printf("1: %p\n", ptr);
	ft_printf("2: %p\n", null_ptr);
	ft_printf("3: %p\n", &str);
	printf("printf %%p:\n");
	printf("1: %p\n", ptr);
	printf("2: %p\n", null_ptr);
	printf("3: %p\n", &str);

	return (0);
}

