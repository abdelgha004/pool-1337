#include <unistd.h>
#include <stdio.h>

void  ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

int main(void){
    int x = 12;
    int y = 6;
    printf("x = %d  y = %d\n", x, y);
    ft_div_mod(x, y, &x, &y);
    printf("x = %d  y = %d\n", x, y);
}