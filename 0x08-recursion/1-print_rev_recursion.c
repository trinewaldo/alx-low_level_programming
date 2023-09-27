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
int m = i-1;

while(m>=0)
{
putchar(s[m]);
m--;
}
printf("\n");
}
