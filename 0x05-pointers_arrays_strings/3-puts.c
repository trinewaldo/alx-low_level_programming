#include <stdio.h>
#include <string.h>

/**
 * _puts - prints string
 *
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
while (*str != '\0' )
{
putchar(*str);
str++;
}
putchar('\n');
}
