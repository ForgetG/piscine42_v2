#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	c;

	c = 0;
	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		c = 'P';
		ft_putchar(c);
	}
}

int	main(void)
{
	int	nbp;
	int	nbn;
	int	nb0;
	int	nb_diz;


	nbp = 9;
	nbn = -9;
	nb0 = '0';
	nb_diz = 765;
	ft_is_negative(nbp);
	ft_putchar('\n');
	ft_is_negative(nbn);
	ft_putchar('\n');
	ft_is_negative(nb0);
	ft_putchar('\n');
	ft_is_negative(nb_diz);
	ft_putchar('\n');
	return (0);
}
