#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;
    int stop;
    i = 0;
    j = size - 1;
    stop = (size / 2);

    while (i < stop)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j = 0;
    while (i < 9)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(arr, 9);

    while (j < 9)
    {
        printf("%d ", arr[j]);
        j++;
    }
    printf("\n");
}