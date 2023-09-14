#include <stdio.h>
int print_alphabet()
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
printf("\n");
return (0);         
}
