/*==== ft_print_comb2 ====*/
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_two_nb(int nb){
    char c1 = nb / 10 + '0';
    char c2 = nb % 10 + '0';
    write(1, &c1, 1);
    write(1, &c2, 1);
}
void ft_print_comb2()
{
    int a = 0;
    int b;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_print_two_nb(a);
            write(1, " ", 1);
            ft_print_two_nb(b);
            if (a != 98)
            {
                write(1, ", ",2);
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}