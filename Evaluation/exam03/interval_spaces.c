#include<unistd.h>
int main(int arc, char **arv){
    if(arc == 2)
    {
        int i = 0;
        while(arv[1][i]){
            write(1, &arv[1][i], 1);
            if(arv[1][i + 1] != '\0'){
                write(1, "   ", 3);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}