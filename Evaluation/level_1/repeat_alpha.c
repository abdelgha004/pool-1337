#include <unistd.h>

int repeat_count(char c){
    int count = 0;
    if(c >= 'a' && c <= 'z')
        count = (c - 96) ;
    else if(c >= 'A' && c <= 'Z')
        count = (c - 64);
    else 
        count = 1;
    return count;
}



int main(int arc, char **arv){
    if (arc == 2){
        int i = 0;
        int j ;
        while(arv[1][i]){
            j = 1;
            while(j <= repeat_count(arv[1][i]))
            {
                write(1, &arv[1][i], 1);
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}