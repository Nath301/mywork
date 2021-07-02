#include <stdio.h>

void ft_strlen (char *str){
int i = 0;
    while (*str)
    {
        i++;
        str++;
    }
    printf("%d", i);
}
int main (void){
    char stri[] = "bonjour";
    char *str = &stri;
    ft_strlen(*stri);
}