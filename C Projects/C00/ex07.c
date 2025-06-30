#include <unistd.h>
// #include <stdio.h>
void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putnbr(int nb){

}

int main(void)
{
    ft_putnbr(42);
    return 0;
}