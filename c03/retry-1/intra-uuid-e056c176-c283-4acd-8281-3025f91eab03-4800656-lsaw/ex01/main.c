#include <stdio.h>
#include "ft_strncmp.c"

int main (void)
{
	char str[] = "AAAAA";
	char str2[] = "AAAAA";
	char str3[] = "AABA";
	char str4[] = "AAAC";

	printf("String 1 and String 2: %d \n", ft_strncmp(str, str2, 4));
	printf("String 2 and String 3: %d \n", ft_strncmp(str2, str3, 4));
	printf("String 3 and String 4: %d \n", ft_strncmp(str3, str4, 4));
	printf("String 4 and String 1: %d \n", ft_strncmp(str4, str, 4));
}
