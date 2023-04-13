#include <stdio.h>

int	ft_fibonacci(int index);

int main (void)
{
	int d = 14;
	printf("The number %d returns the %d-th element of the Fibonacci sequence. \n", d, ft_fibonacci(d));
}
