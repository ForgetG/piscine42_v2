#include <unistd.h>

void	ft_print_comb(void)
{
	int	hundreds;
	int	tens;
	int	nb;

	hundreds = '0';
	tens = '0';
	nb = '0';
	while (hundreds < '8')
	{
		tens = hundreds + 1;
		while (tens < '9')
		{
			nb = tens + 1;
			while (nb <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &nb, 1);
				write(1, ", ", 2);
				nb ++;
			}
			tens++;
		}
		hundreds++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
