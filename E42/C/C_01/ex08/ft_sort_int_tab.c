void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;
	int	min_index;

	temp = 0;
	i = 0;
	j = 0;
	min_index  = 0;

	while(i < size - 1)
	{
		min_index = i;
		j = i + 1;
		while(j < size)
		{
			if(tab[j] < tab[min_index])
				min_index = j;
			j++;
		}
		if(min_index != i)
		{
			temp = tab[i];
			tab[i] = tab[min_index];
			tab[min_index] = temp;
		}
		i++;
	}
}

/*-------------------------------------------------------------*/

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int c[5] = {55,-10,59,0,54};
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
}
