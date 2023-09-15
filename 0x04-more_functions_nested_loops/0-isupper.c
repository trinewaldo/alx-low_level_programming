#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* main - check the code.
*
* Return: Always 0.
*/

int _isupper(char c, char d)
{
    printf("%c: %d\n", c, isupper(c));
    printf("%c: %d\n", d, isupper(d));

    return (0);
}

int main() {
    int c = 'A';
    int d = 'a';

    _isupper(c, d);

    return 0;
}
