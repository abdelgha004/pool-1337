// Assignment name  : is_palindrome
// Expected files   : is_palindrome.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program  that takes a string as argument and prints the
// string if it's palindrome, followed by a newline.

// If The string is not a palindrome write newline

// If there is more or less than 1 argument, your program must print only a newline
// only.

// Examples:

// $> ./is_palindrome "aaabb" | cat -e
// $> $
// $> ./is_palindrome "zaz" | cat -e
// $> zaz$


#include <unistd.h>
void ft_putstr(char *str){
    while(*str)
        write(1, str++, 1);
}

int main(int arc, char **arv){
    if(arc == 2){
        int len = 0;
        int i = 0;
        while(arv[1][len])
            len++;
        int l = len;
        len--;
        while(i < len ){
            if(arv[1][len] != arv[1][i]){
                break;
            }
            i++;
            len--;
        }
        if (arv[1][i] == arv[1][len])
        {
            ft_putstr(arv[1]);
        }
        
    }
    write(1, "\n", 1);
}