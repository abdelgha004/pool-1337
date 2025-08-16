
void	ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// #include <stdio.h>
// int main(){
//     int a = 2;
//     int b = 10;
//     ft_swap(&a, &b);
//     printf("a = %d, b = %d", a, b);
// }