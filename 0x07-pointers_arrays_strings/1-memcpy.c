#include "main.h"

/**
 * _memcpy(): function copies memory are
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: memory area to copy to
 *
 * Return: Always value
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr_dest = dest;
    char *ptr_src = src;

    for (unsigned int i = 0; i < n; i++) {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
    }

    return dest;
}
