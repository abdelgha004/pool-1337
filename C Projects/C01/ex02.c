#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int num1 = 10;
    int num2 = 10;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("%d %d\n", *ptr1, *ptr2);
    ft_swap(ptr1, ptr2);
    printf("%d %d\n", *ptr1, *ptr2);
    return 0;
}