#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[15];
    char s2[15];
    int    ret;

    strcpy(s1, "ABCD");
    strcpy(s2, "ABGD");
    ret = ft_strcmp(s1, s2);

    if (ret < 0)
    {
        printf("A string s1 é menor e não confere\n");
    }
    else if (ret > 0)
    {
        printf("A string s2 é menor e não confere\n");
    }
    else
    {
        printf("As strings conferem");
    }
    return (0);
}