#include <unistd.h>
void ft_print_numbers(){
    write(1,"0123456789", 10);
}
int main()
{
    ft_print_numbers();
}