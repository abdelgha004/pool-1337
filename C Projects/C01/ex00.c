#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int num = 6;
    int *c = &num;
    printf("%d\n", *c);
    ft_ft(c);
    printf("%d\n", *c);
    return 0;
}