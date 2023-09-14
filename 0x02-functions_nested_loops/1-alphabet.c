#include <stdio.h>

/**
 * main - Entry point
 * Description: Use the puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int print_alphabet()
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
