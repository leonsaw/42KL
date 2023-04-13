#include <stdio.h>

char	*ft_strdup(char *src);

int main (void)
{
	char str[] = "hello";
	char *str2;	

	printf("%s \n", str);
	ft_strdup(str2, str);
	printf("%s \n", str2);
}
