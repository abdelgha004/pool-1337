#include <unistd.h>
void put_char(char c){
    write(1, &c, 1);
}

void put_number(int nb){
    if(nb >= 10){
        put_number(nb / 10);
    }
    put_char((nb % 10) + '0');
}




int main(){
    int num = 1;
    while(num <= 100){
        if(num % 3 == 0 && num % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(num % 3 == 0)
            write(1, "fizz", 4);
        else if(num % 5 == 0)
            write(1, "buzz", 4);
        else 
            put_number(num);
        num++;
        write(1, "\n", 1);
    }
    return 0;
}
