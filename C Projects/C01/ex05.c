/*==== ft_putstr ====*/

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }

}

int main(void){
    char message[] = "abdo anasi";
    ft_putstr(message);
    return 0;
}