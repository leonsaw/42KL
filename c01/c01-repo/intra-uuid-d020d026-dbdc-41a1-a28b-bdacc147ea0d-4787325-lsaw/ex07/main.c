#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main (void)
{
	int arr[10] = {4,2,6,3,9};
	int i;
	int size;
	int *tab;

	i = 0;
	tab = arr;

	while(arr[i] != '\0')
	{
		i++;
	}

	size = i; 
	printf("Initial tab is %d, size is %d \n", *tab, size);

	ft_rev_int_tab(tab, size);
	printf("Final tab is %d, size is %d \n", *tab, size);
		
	i = 0;
	while (arr[i] != '\0')
    {
       printf("Array is %d \n", arr[i]);
	   i++;
    }
}