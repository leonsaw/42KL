#include <stdio.h>
#include "ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[30];
	unsigned int n;


	n = 10;
	printf("The string before function is: %s \n", src);
	printf("The number of characters to cut off is: %d \n", n);

	ft_strncpy(dest, src, n);

	printf("The string after function is: %s \n", dest);
}
