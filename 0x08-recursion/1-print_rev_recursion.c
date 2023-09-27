#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* void _print_rev_recursion reverses a string
* char *s: string parameter received
*/
void _print_rev_recursion(char *s)
{
int i = strlen(s);

for(int m=i-1; m>=0; m--)
{
putchar(s[m]);
}
printf("\n");
}
