/*
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>*/

#include <unistd.h>

int main(){
    char num;
    num = '9';
    while(num >= '0'){
        write(1, &num, 1);
        num -= 1;
    }
    write(1, "\n", 1);
}