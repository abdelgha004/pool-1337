#include <unistd.h>
#include <stdio.h>
int ft_str_is_printable(char *str){
    int result;
    result = 1;
    int i;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 32 && str[i] <= 126){
            i++;
        }else {
            result = 0;
            break;
        }
    }
    printf("%d\n", result);
    return result;
}

int main(void){
    char test[] = "SFDSFRC";
    ft_str_is_printable(test);
}