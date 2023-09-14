#include <stdio.h>
int print_alphabet()
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar("\n");
return (0);         
}
