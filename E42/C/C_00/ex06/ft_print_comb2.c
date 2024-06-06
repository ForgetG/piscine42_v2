#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}


void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;
	char	buffer[7];

	nb1 = 0;
	while(nb1 < 99)
	{
		nb2 = nb1 + 1;
		while (nb2 < 100)
		{
			buffer[0] = '0' + nb1 / 10;
			buffer[1] = '0' + nb1 % 10;
			buffer[2] = ' ';
			buffer[3]  = '0' + nb2 / 10;
			buffer[4] = '0' + nb2 % 10;
			if(!(nb1 == 98 && nb2 == 99))
			{
				buffer[5] = ',';
				buffer[6] = ' ';
				write(1, buffer, 7);
			}
			else
			{
				write(1, buffer, 5);
			}
			nb2++;
		}
		nb1++;
	}
	write(1, "\n", 1);
}
