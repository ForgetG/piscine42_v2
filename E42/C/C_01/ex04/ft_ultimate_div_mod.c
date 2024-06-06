#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}


int	main(void)
{
	int	a = 16;
	int	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
	return 0;
}
