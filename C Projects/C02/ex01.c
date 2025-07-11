#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i;
    i = 0;
    while(i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    while( i < n){
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void){
    char str[] = "abdelghafour";
    char str2[20];
    int start = 8;
    printf("%s\n", str2);
    ft_strncpy(str2, str, start);
    printf("%s\n", str2);
}