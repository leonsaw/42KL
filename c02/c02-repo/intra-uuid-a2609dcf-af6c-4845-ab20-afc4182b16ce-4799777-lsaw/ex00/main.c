#include <stdio.h>
#include "ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int main (void)
{
	char src[20] = "This is the message!";
	char dest[20];

	printf("The string to be copied is: %s \n", src);
	ft_strcpy(dest, src);
	printf("The copied string is: %s \n", dest);
}
