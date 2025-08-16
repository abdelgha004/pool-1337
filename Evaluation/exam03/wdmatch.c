#include <unistd.h>

void ft_putstr(char *str){
    while(*str){
        write(1, str++, 1);
    }
}
int main(int arc, char **arv){
    if( arc == 3){
        char *temp;
        int i = 0;
        temp = arv[1];
        while(*temp && *arv[2]){
            while(*temp == *arv[2] && (*temp && *arv[2])){
                arv[2]++;
                temp++;
            }
            arv[2]++;
        }
        if(*temp == '\0')
            ft_putstr(arv[1]);
    }
    write(1, "\n", 1);
}