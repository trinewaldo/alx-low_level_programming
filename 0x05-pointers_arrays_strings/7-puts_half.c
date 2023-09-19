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

for (int i = 0; i < halfLength; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
