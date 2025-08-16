int	ft_strlen(char *str){
    int len = 0;
    while(str[len]){
        len++;
    }
    return len;
}

// #include <stdio.h>

// int main(){
//     char src[] = "test the code";
// //     char dest[] = "d";
//     printf("%d\n", ft_strlen(src));
// }