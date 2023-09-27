#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int is_alphanumeric(char c)
{
return ((c >='a' && c <='z') || (c >='A'&& c <='Z') || (c >='0' && c <='9'));
}
int is_palindrome_helper(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
if (!is_alphanumeric(s[left]))
{
return (is_palindrome_helper(s, left + 1, right));
}
if (!is_alphanumeric(s[right]))
{
return (is_palindrome_helper(s, left, right - 1));
}
if (tolower(s[left]) != tolower(s[right]))
{
return (0);
}
return (is_palindrome_helper(s, left + 1, right - 1));
}
int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_helper(s, 0, length - 1));
}
