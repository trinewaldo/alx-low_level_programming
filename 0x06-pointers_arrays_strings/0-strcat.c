#include <stdio.h>

/**
* Add a terminating null byte
* Find the length of the destination string
* Append the source string to the destination string
*/
char *_strcat(char *dest, char *src)
{
int dest_leb =0;
int i =0;

while(dest[edst_len] !=0)
{
dest[dest_len++;
}
while(src[i] !=0)
{dest[dest_len + i] = src[i];
i++;
}
dest[dest_len +i] =0;

return dest;
}
