#include<unistd.h>
#include<stdio.h>

void  ft_ultimate_div_mod(int *a, int *b){
    int temp = *a;
    *a /= *b; 
    *b = temp % *b; 
}

int main(void){
    int x = 12;
    int y = 6;
    printf("x = %d  y = %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("x = %d  y = %d\n", x, y);
}
