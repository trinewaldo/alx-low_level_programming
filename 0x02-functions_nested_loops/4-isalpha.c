#include <stdio.h>

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1; /* The character is alphabetic */
	} else
	{
		return 0; /* The character is not alphabetic */
	}
}

/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = isalpha('H');
	putchar(r + '0');
	r = isalpha('o');
	putchar(r + '0');
	r = isalpha(108);
	putchar(r + '0');
	r = isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
