#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void printAlphabet()
{
    for (int i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
        putchar('\n');
    }
    
}

int main()
{
    printAlphabet();
    return 0;
}
