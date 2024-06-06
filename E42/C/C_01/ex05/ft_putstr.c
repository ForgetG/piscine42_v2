#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	p[] = "Bonjour";
	char	p2[] = "1234567865434";
	char	p3[] = "azfghjkll_cvg-3565/hjdg";
	ft_putstr(p);
	write(1, "\n", 1);
	ft_putstr(p2);
	write(1, "\n", 1);
	ft_putstr(p3);
	write(1, "\n", 1);
	return 0;
}
