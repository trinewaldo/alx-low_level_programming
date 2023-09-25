#include "main.h"

/**
 * Function to check the number of bytes in a string
 * @s: the segment checked
 *
 *Return: Number of bytes, which is conistent with those from accept
 */
unasigned int _strspn(char *s, char *accept)
{
  unasigned int n = 0;
  int r;

  while(*s)
  {
    for(r = 0; accept[r]; r++)
    {
      if(*s == accept[r])
      {
        n++;
        break;
      }
      else if(accept[r+1] ==0)
        return (n);
    }
    s++;
  }
  return (n);
}
