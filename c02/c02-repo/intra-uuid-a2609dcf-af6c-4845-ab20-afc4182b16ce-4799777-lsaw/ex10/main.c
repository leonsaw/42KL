#include <stdio.h>
#include "ft_strlcpy.c"

int	main(void)
{

	char str[] = "This is a cat";
	char str2[10];
	int strl = ft_strlcpy(str2, str, 3);

	printf("The source string is: %s \n", str);
	printf("The destination string is: %s \n", str2);
	printf("The total length of characters to create from source in destination is: %d", strl);
}
