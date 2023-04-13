#include "ft_strcmp.c"
#include <stdio.h>

int main (void)
{
	char str[] = "AAAA";
	char str2[] = "AAAA";
	char str3[] = "AAAB";
	char str4[] = "AAAC";

	printf("String 1 and String 2: %d \n", ft_strcmp(str, str2));
	printf("String 2 and String 3: %d \n", ft_strcmp(str2, str3));
	printf("String 3 and String 4: %d \n", ft_strcmp(str3, str4));
	printf("String 4 and String 3: %d \n", ft_strcmp(str4, str3));
}
