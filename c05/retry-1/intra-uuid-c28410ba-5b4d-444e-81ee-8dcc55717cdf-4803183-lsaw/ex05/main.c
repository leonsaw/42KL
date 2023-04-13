#include <stdio.h>

int	ft_sqrt(int nb);

int main(void)
{
	int i;

	i = 2147395600;

	//if (ft_sqrt(i) != 0)
		printf("The square root of %d is %d \n", i, ft_sqrt(i));
	//else 
		printf("%d does not have a square root \n", i);
}
