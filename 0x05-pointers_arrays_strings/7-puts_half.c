#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * prints_half - printing half a string
 * @str: that's the string
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = strlen(str);
int halfLength = length / 2;
    
while(int i = 0; i < halfLength; i++) 
{
printf("%c", str[i]);
}
printf("\n");
}
