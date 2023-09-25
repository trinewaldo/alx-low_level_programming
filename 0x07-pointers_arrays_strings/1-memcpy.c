#include "main.h"

/**
 * _memcpy(): function copies memory are
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: memory area to copy to
 *
 * Return: Always value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int a = 0;
    int b = n;

    for (; a < b; a++)
    {
        dest[a] = src[a];
        n--;
    }
    return dest;
}
