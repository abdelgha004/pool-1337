#include <stdio.h>
#include <unistd.h>

void aff_a(char s[]){
    printf("a\n");
}

int main(void){
    char test[50];
    printf("enter a string: ");
    scanf(" %s", test);
    aff_a(test);
    return 0;
}
