#include <unistd.h>

void	ft_putnbr(int nb)
{
	write(1, nb, 1);
}


void	ft_putnbr(int nb);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr(42);
	write(1, "\n", 1);
	write(1, "10:", 3);
	ft_putnbr(10);
	write(1, "\n", 1);
	write(1, "0:", 2);
	ft_putnbr(0);
	write(1, "\n", 1);

	write(1, "-42:", 4);
	ft_putnbr(-42);
	write(1, "\n", 1);
	write(1, "-1:", 3);
	ft_putnbr(-1);
	write(1, "\n", 1);
	write(1, "max:", 4);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	write(1, "min:", 4);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}
