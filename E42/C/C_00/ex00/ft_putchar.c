#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('S');
	ft_putchar('U');
	ft_putchar('C');
	ft_putchar('C');
	ft_putchar('E');
	ft_putchar('S');
	ft_putchar('S');
	ft_putchar('\n');
	return (0);
}
