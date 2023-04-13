#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
    int a = 5;
    int b = 10;

    printf("Before function: a is %d, b is %d \n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After function: a is %d, b is %d \n", a, b);

}