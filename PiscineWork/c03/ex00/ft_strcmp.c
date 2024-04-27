#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if ((s1[i] - s2[i]) > 0)
            {
            printf("diff more than zero: %i\n", (s1[i] - s2[i]));
            return 1;
            }       
        else if ((s1[i] - s2[i]) < 0)
            {
            printf("diff less than zero: %i\n", (s1[i] - s2[i]));
            return -1;
            }    
        i++;
    } 
    return (0);
}

int main(void)
{
    char    *textOne = "Hello";
    char    *textTwo = "Hello!";
    int i;

    i = ft_strcmp(textOne, textTwo);
    
    printf("output of ft strcmp: %i\n", i);


    if (i == 0)
    {
        printf("these are the same");
    }
    else if (i < 0)
    {
        printf("the second text is more than first");
    }
    else if (i > 0)
    {
        printf("the first text is more than second");
    }
}
