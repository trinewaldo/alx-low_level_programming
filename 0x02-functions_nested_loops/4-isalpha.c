#include <stdio.h>
#include <string.h>

/**
* _isalpha - checks for alohabetic character 
* @c: character to be checked 
* 
* Return:1 if character is a letter, 0 otherwise
*/

int main() 
{
char str[] = "Hello World!";
for (int i = 0; i < strlen(str); i++) 
{
if (isalpha(str[i])) 
{
printf("%c is an alphabetical character\n", str[i]);
}
}
return 0;  
}
