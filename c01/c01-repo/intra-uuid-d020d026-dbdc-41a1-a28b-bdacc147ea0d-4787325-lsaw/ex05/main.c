#include <stdio.h>

void ft_putstr(char *str);

int main (void)
{
    char str[20] = "Hello there.";
    char *strp;
    
    strp = str;

    ft_putstr(strp);
}
