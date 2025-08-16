char    *ft_strrev(char *str)
{
    char temp;
    int i = 0;
    int j = 0;

    while(str[i])
        i++;
    while(j < i - 1){
        temp = str[j];
        str[j] = str[i - 1 ];
        str[i - 1] = temp;
        j++;
        i--;
    }
    return str;
}

#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
