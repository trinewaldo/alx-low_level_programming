#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: paramter used to allocate memory
 * @*we: pointer to the allocated memory
 * return (we): pointer to the aloocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *we = (int *)malloc(b * sizeof(int));

	return (we);
}
