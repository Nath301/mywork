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
    ft_strlen("bonjour");
}