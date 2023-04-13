#include <stdio.h>
#include "ft_strlowcase.c"

int main (void)
{
	char str[] = "abcdef";
	char str2[] = "abcDEF";
	char str3[] = "ABCdef";
	char str4[] = "123456";
	char str5[] = "abc456";
	char str6[] = "ABC456";
	char str7[] = "ABCDEF";

	printf("Lowercase string result: %s \n", ft_strlowcase(str));
	printf("Lower + Uppercase string results: %s \n", ft_strlowcase(str2));
	printf("Upper + Lowercase string result: %s \n", ft_strlowcase(str3));
	printf("Number only string: %s \n", ft_strlowcase(str4));
	printf("Lowercase + number string: %s \n", ft_strlowcase(str5));
	printf("Uppercase + number string: %s \n", ft_strlowcase(str6));
	printf("Uppercase string result: %s \n", ft_strlowcase(str7));

}
