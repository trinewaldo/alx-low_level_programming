#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @c: the character to locate
 * @s: the string to check
 * 
 * Return: pointer to first occurence or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
  int i = 0;

  for(; s[i] >= 0; i++)
  {
    if(s[i] == c)
      return (&s[i]);
  }
  return (0);
}

