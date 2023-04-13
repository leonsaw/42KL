#include <stdio.h>
#include "ft_strupcase.c"

int main (void)
{
	char str[] = "abcdef";
	char str2[] = "abcDEF";
	char str3[] = "ABCdef";
	char str4[] = "123456";
	char str5[] = "abc456";
	char str6[] = "ABC456";
	char str7[] = "ABCDEF";

	printf("Lowercase string result: %s \n", ft_strupcase(str));
	printf("Lower + Uppercase string results: %s \n", ft_strupcase(str2));
	printf("Upper + Lowercase string result: %s \n", ft_strupcase(str3));
	printf("Number only string: %s \n", ft_strupcase(str4));
	printf("Lowercase + number string: %s \n", ft_strupcase(str5));
	printf("Uppercase + number string: %s \n", ft_strupcase(str6));
	printf("Uppercase string result: %s \n", ft_strupcase(str7));

}
