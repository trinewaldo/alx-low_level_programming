#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * prints_half - printing half a string
  * @str: that's the string
  * put_half return prints the last half of the string
  * Return: void
  */
void puts_half(char *str)
{
int length = strlen(str);
int halfLength = length / 2;
printf("%s\n", str + halfLength);
printf("\n");
}
