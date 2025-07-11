#include <unistd.h>
#include <stdio.h>
int ft_str_is_numeric(char *str){
    int result;
    result = 1;
    int i;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
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
    char test[] = "";
    ft_str_is_numeric(test);
}