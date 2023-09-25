#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf(a[i][j]);
		printf('\n');
	}
}
