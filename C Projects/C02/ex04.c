#include <unistd.h>
#include <stdio.h>
int ft_str_is_lowercase(char *str){
    int result;
    result = 1;
    int i;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
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
    char test[] = "bdelgh afour";
    ft_str_is_lowercase(test);
}