#include<unistd.h>
#include<stdio.h>

void  ft_ultimate_div_mod(int *a, int *b){
    int div;
    div = *a / *b;
    *b = *a % *b;
    *a = div;
}

int main(void){
    int num1 = 13;
    int num2 = 2;
    printf("%d %d\n", num1, num2);
    ft_ultimate_div_mod(&num1, &num2);
    printf("%d %d\n", num1, num2);
}
