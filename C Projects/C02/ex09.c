#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str){
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
        char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(test);
}