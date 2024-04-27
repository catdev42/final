#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != 0)
    {
        i++;
    }
    while (src[j] != 0)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = 0;
    return (dest);
}

int main(void)
{
    char    array[30];

    ft_strcat(array, "hello, ");
    ft_strcat(array, "i like you");
    ft_strcat(array, "!!!");

    printf("%s", array);
}