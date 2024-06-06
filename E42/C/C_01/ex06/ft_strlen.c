#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	p[] = "Bonjour";
	char	p2[] = "0123456789";
	char	p3[] = "eqkejfezfhJHKJH-esfjdk_fszf'dq/34567";

	printf("%d\n", ft_strlen(p));
	printf("%d\n", ft_strlen(p2));
	printf("%d\n", ft_strlen(p3));
	return (0);
}
