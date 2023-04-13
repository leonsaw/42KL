#include <stdio.h>
#include "ft_strcat.c"

int main (void)
{
	char str[] = "pine";
	char str2[] = "apple";

	printf("%s \n", ft_strcat(str, str2));
}
