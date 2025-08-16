#include <unistd.h>
int main(int arc, char **arv){
    if(arc == 3){
        int i = 1;
        int j = 0;
        int arr[256] = {0};
// test the comment section
// test the comment section
// test the comment section
        while(i < arc){
            j = 0;
            while(arv[i][j]){
                arr[(int)arv[i][j]] = 1;
                j++;
            }
            i++;
        }
        i = 1;
        j = 0;
        while(i < arc){
            j = 0;
            while(arv[i][j]){
                if (arr[(int)arv[i][j]] == 1){
                    write(1, &arv[i][j], 1);
                    arr[(int)arv[i][j]] = 2;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}