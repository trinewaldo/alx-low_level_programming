#include <stdio.h>
#include <string.h>
#include "main.h"

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
    
fwrite(str, sizeof(char), halfLength, stdout);
printf("\n");
}
