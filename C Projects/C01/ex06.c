#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int count;
    count = 0;
    int i;
    i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(void){
    char message[] = "anda   yi";
    ft_strlen(message);
    return 0;
}