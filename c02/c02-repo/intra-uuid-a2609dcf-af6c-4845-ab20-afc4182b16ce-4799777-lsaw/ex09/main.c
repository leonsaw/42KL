#include <stdio.h>
#include "ft_strcapitalize.c"

int main (void)
{
	char str[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";

	printf("String before function is: %s \n", str);
	printf("String after function is: %s \n", ft_strcapitalize(str));
}
