int	ft_print_ptr(void *ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
}