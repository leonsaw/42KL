#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 8;
    b = 10;

    printf("a is %d and b is %d before the function. \n", a, b);
    ft_div_mod(a, b, &div, &mod);
    printf("The div value is %d and the mod value is %d. \n", div, mod);
}