#include <unistd.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src){
    int i;
    i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void){
    char str[] = "abdelghafour";
    char str2[20];
    ft_strcpy(str2, str);
}