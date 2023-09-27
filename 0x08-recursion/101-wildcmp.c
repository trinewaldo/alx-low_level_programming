#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool compare(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (true);
}
if (*s2 == '*')
{
return ((compare(s1, s2 + 1) || compare(s1 + 1, s2)));
}
if (*s1 == *s2 || *s2 == '?')
{
return ((compare(s1 + 1, s2 + 1)));
}
return (false);
}
int wildcmp(char *s1, char *s2)
{
return ((compare(s1, s2) ? 1 : 0));
}
