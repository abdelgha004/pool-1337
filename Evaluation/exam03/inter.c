#include <unistd.h>
int main(int arc, char **arv)
{
    if (arc == 3)
    {
        int i = 1;
        int j = 0;
        int arr[256] = {0};
        while (arv[2][j])
        {
            arr[(int)arv[2][j]] = 1;
            j++;
        }
        j = 0;
        while (arv[1][j])
        {
            if (arr[(int)arv[1][j]] == 1)
            {
                write(1, &arv[1][j], 1);
                arr[(int)arv[1][j]] = 2;
            }
            j++;
        }
    }
    write(1, "tesyt \n", 1);
}