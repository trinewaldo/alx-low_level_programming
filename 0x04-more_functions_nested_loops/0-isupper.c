#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
    char c;

    c = 'A';

    if(isupper(c));
    {
        printf("%d\n", c);
    }

    c = 'a';
    if(isupper(c));
    {
        printf("%d\n", c);
    }
    
    return (0);
}
