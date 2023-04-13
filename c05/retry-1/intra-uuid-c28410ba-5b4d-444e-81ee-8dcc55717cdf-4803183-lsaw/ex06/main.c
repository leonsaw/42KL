#include <stdio.h>

int ft_is_prime(int nb);

int main (void)
{
	int i;

	i = 23;

	if (ft_is_prime(i) == 1)
		printf("%d is a prime number \n", i);
	else
		printf("%d is not a prime number \n", i);
}
