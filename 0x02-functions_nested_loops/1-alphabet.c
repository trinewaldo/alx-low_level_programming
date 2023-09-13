#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase with nexw line at the end
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
