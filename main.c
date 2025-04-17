#include "ft_printf.h"
#include <stdio.h> // pour comparer avec le vrai printf

int main(void)
{
	ft_printf("%p %p\n", 0, 0);
  printf("%p %p", NULL, NULL);
	return (0);
}
