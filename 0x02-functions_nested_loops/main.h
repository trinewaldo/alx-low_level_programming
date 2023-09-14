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
printf("%c",full);
printf("\n");
return full;         
}
