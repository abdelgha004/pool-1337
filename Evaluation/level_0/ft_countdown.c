
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