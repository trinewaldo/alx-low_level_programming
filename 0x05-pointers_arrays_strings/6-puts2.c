#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *puts2 - prints string, followed by a new line,
 * @str: pointer to the string to point
 * Return: void
 */
void puts2(char *str)
{
int length = strlen(str);
int i, j;
char temp;

for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}
