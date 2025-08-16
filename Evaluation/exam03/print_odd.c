#include <unistd.h>

int main(int arc, char ** arv){
    
    int i = 1;
    int j;
    while(i < arc){
        j = 0;
        while(arv[i][j]){
            if( (j % 2) == 0){
                write(1, &arv[i][j], 1);
            }
            j++;
        }
        i++;
    }
    return 0;
}