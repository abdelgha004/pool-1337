#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;
    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] >= tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int arr[8] = {3, 44, 8, -5, 1, 12, 100, 5};
    int i, j = 0;
    while (i < 8)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    ft_rev_int_tab(arr, 8);

    while (j < 8)
    {
        printf("%d ", arr[j]);
        j++;
    }
    printf("\n");
}