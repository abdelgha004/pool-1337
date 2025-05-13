/*==== ft_print_alphabet ====*/

#include <unistd.h>

void ft_print_alphabet(){
    char alphabet = 'a';
    while (alphabet <= 'z')
    {
        write(1, &alphabet, 1);
        alphabet++;
    }
    
};

int main(){
    ft_print_alphabet();
    return 0;
}