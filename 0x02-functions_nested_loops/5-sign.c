#include <stdio.h>

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return 1;
	} else
		if (n == 0)
		{
			printf("0");
			return 0;
		} else
		{
			printf("-");
			return -1;
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

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
