#include "ft_ft.c"
void	ft_ft(int *nbr);

int main (void)
{
	int i;
	int *nbr;

	i = 1;
	nbr = &i;
	printf("before function: %d\n", i);
	ft_ft(nbr);
	printf("after function: %d\n", i);
}
