#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_alphanumeric(char c)
{
return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}
bool is_palindrome_recursive(char *s, int left, int right)
{
if (left >= right)
{
return true;
}
if (!is_alphanumeric(s[left]))
{
return is_palindrome_recursive(s, left + 1, right);
}
if (!is_alphanumeric(s[right]))
{
return is_palindrome_recursive(s, left, right - 1);
}
if (tolower(s[left]) != tolower(s[right]))
{
return false;
}
return is_palindrome_recursive(s, left + 1, right - 1);
}
bool is_palindrome(char *s)
{
int length = strlen(s);
return is_palindrome_recursive(s, 0, length - 1);
}
