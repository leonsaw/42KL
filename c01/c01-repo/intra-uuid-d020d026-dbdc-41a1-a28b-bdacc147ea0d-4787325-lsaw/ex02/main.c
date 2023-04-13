#include <stdio.h>

void ft_swap(int *a, int *b);

int main (void)
{
    int a;
    int b;
    int *c;
    int *d;

    a = 5;
    b = 10;
    c = &a;
    d = &b;

    printf ("Before function, a is %d, b is %d. \n", a, b);
    ft_swap(c, d);
    printf ("After function, a is %d, b is %d. \n", a, b);

}