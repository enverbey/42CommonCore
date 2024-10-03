#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}
/*
#include <stdio.h>
int main()
{
    char tmp[13] = "Hello World!";
    char tmp_copy[13];
    ft_strcpy(tmp_copy, tmp);
    printf("%s",tmp_copy);
}
*/