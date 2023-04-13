#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main (void)
{
	int n;

	n = 6;

	printf("%d! is %d \n", n, ft_recursive_factorial(n));
}
