#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int x = 5;
    int y = 10;
    printf("x = %d  and   y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("x = %d  and   y = %d\n", x, y);
    return 0;
}