#include <unistd.h>

int main(int arc, char **arv){
    if(arc == 4){
        int i = 0;
        int j;
        while(arv[1][i]){
            j = 0;
            while(arv[2][j]){
                if(j > 1){
                    write(1, "\n", 1);
                    return 0;
                }
                if(arv[1][i] == arv[2][j]){
                    arv[1][i] = arv[3][j];
                }
                j++;
            }
            write(1, &arv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}