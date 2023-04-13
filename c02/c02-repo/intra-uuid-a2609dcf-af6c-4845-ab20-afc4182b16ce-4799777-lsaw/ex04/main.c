#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	ft_str_is_numeric(char *str);

int main (void)
{
    char str[] = "abcdef";
    char str2[] = "123456";
    char str3[] = "abc456";
    char str4[] = "123def";
    char str5[] = "";
    char str6[] = "ABCDEF";
    char str7[] = "abcDEF";

    printf("If string is alphabets only, return 1 \n");
    printf("If string contains non-alphabets, return 0 \n");
    printf("If string is empty, return 0 \n");
    printf("----------------------------------------------------\n");
    printf("String of lowercase alphabets only return: %d \n", ft_str_is_lowercase(str));
    printf("String of numbers only return: %d \n", ft_str_is_lowercase(str2));
    printf("String of alphabets + numbers return: %d \n", ft_str_is_lowercase(str3));
    printf("String of numbers + alphabets return: %d \n", ft_str_is_lowercase(str4));
    printf("Empty string return: %d \n", ft_str_is_lowercase(str5));
    printf("Capital alphabets return: %d \n", ft_str_is_lowercase(str6));
    printf("Mix of Uppercase and Lowercase alphabets return: %d \n", ft_str_is_lowercase(str7));
}
