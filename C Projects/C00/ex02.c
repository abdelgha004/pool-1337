/*==== ft_print_reverse_alphabet ====*/
#include <unistd.h>

void ft_print_reverse_alphabet()
{
    char alphabet = 'z';
    while (alphabet >= 'a')
    {
        write(1, &alphabet, 1);
        alphabet--;
    }
    
}
int main(){
    ft_print_reverse_alphabet();
    return 0;
}