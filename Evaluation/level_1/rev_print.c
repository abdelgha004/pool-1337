#include <unistd.h>

int main(int arc, char **arv){
    
    if(arc == 2){
        int len = 0;
        
        while(arv[1][len])
        len++;
        int i = len - 1 ;
        while(i >= 0){
            write(1, &arv[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return 0;
}