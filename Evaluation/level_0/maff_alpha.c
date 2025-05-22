/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$*/

#include <unistd.h>

int main(){
    char alph;
    alph = 'a';
    int n = 1;

    while(n < 27){
        if(n % 2 == 0){
           alph -= 32;
           write(1, &alph, 1);
        }else{
            if(alph <= 'Z'){
                alph += 32;
            }
            write(1, &alph, 1);
        }
        n++;
        alph++;    
    }
    write(1, "\n", 1);
    return 0;
}

/*
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int x;

    x = 97;
    while(x <= 122)
    {
        if(x % 2 == 0)
            ft_putchar(x - 32);
        else
            ft_putchar(x);
        x++;
    }
    ft_putchar('\n');
    
    return 0;
}*/