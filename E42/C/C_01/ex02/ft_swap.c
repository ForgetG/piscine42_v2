#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	nb1 = 5;
	int	nb2 = 28;

	ft_swap(&nb1, &nb2);
	printf("%d,  %d\n", nb1, nb2);
	return 0;
}
