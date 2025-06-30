#include <unistd.h>
#include <stdio.h>

void  ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

int main(void){
    int num1 = 0;
    int num2 = 0;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("%d %d\n", *ptr1, *ptr2);
    ft_div_mod(23, 0, ptr1, ptr2);
    printf("%d %d\n", *ptr1, *ptr2);

}