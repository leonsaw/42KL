#include <stdio.h>

int ft_strlen(char *str);

int main (void)
{
	char str[20] = "Hello!";
	char *strp;
	int length;

	strp = str;

	length = ft_strlen(strp);
	printf("%d", length);
}