#include "main.h"

void rev_string(char *s)
{
    char *j = s;
    char tmp;

    while (*s)
    {
        s++;
    }
        s--;
    while (s>j)
    {
        
        tmp = *s;
        *s = *j;
        *j = tmp;

    j++;
    s--;
    }    
}
