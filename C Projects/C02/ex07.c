#include <unistd.h>
#include <stdio.h>
char *ft_strupcase(char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
        i++;
    }
    printf("%s\n", str);
    return str;
}

int main(void){
    char test[] = "aBDELghaFOuRr";
    ft_strupcase(test);
}