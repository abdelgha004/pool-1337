/*==== ft_print_comb2 ====*/
#include <unistd.h>
void ft_print_two_num(int num){
    char num01;
    char num02;
    num01 = (num / 10) + '0';
    num02 = (num % 10) + '0';
    write(1, &num01,1);
    write(1, &num02,1);
}
void ft_print_comb2(void){
    int num1;
    int num2;
    num1 = 0;
    while(num1 <= 98){
        num2 = num1 + 1;
        while(num2 <= 99){
            ft_print_two_num(num1);
            write(1," ",1);
            ft_print_two_num(num2);
            if(num1 < 98){
                write(1,", ",2);
            }
            num2++;
        }
        num1++;
    }

}

int main(void){
    ft_print_comb2();
    return 0;
}