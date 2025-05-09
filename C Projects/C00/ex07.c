#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putnbr(int nb){
    while(nb > 0){
        char c1 = nb % 10 + '0';
        ft_putchar(c1);
        nb /= 10;
    }
}

int main(void)
{
    ft_putnbr(42);
    return 0;
}