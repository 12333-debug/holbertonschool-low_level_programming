#include "main.h"
#include "stdio.h"
/**
 *
 *
 *
 *
 */

int  print_last_digit(int i)
{
    int last = i % 10;

    if (last < 0)
        last = -last;

    _putchar(last + '0');

    return last;
} 
