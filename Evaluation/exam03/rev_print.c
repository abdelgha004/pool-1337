#include<unistd.h>
int main(int arc, char **arv){
    if(arc == 2)
    {
        int j = 0;
        while(arv[1][j])
            j++;
        j--;
        while(j >= 0){
            write(1, &arv[1][j], 1);
            j--;
        }
    }
    write(1, "\n", 1);
    return 0;
}