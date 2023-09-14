#include <stdio.h>
print_alphabet()
{
char letter = 'a';
char full;
while (letter <= 'z')
{
full = full + letter;
letter++;
}
putchar(full);
printf("\n");
return (full);         
}
