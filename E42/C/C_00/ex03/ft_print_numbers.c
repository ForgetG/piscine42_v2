#include <unistd.h>

void	ft_putint(int i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		ft_putint(i);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
