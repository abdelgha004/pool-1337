#include <unistd.h>
#include <stdio.h>
char *ft_strlowcase(char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        i++;
    }
    printf("%s\n", str);
    return str;
}

int main(void){
    char test[] = "aBDEL 24 #$^T ghaFOuRr";
    ft_strlowcase(test);
}
