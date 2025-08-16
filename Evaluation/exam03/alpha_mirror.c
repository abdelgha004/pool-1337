#include <unistd.h>
void print_mirror(char c){
    if(c >= 'A' && c <= 'Z'){
        c = 'Z' - (c - 'A');
        write(1, &c, 1);
    } else if(c >= 'a' && c <= 'z'){
        c = 'z' - (c - 'a');
        write(1, &c, 1);
    } else{
        write(1, &c, 1);
    }
}

int main(int arc, char **arv){
    if (arc == 2){
        char c;
        int i = 0;
        while(arv[1][i]){
            print_mirror(arv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}