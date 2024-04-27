#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != 0)
    {
        i++;
    }
    while (src[j] != 0 && j < nb)
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

    ft_strncat(array, "hello, ", 7);
    ft_strncat(array, "i like you", 10);
    ft_strncat(array, "!!!",1);

    printf("%s", array);
}