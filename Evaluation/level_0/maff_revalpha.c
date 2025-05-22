
/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$*/

#include <unistd.h>
void ft_putchar(char c){
    write(1, &c, 1);
}

int main(void){
    char alph;
    alph = 'z';
    while(alph >= 'a'){
        if(alph % 2 == 0){
            ft_putchar(alph);
        }else{
            ft_putchar(alph - 32);
        }
        alph--;
    }
    write(1, "\n", 1);
    return 0;
}