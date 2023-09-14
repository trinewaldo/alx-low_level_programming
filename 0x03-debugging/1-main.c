#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
/*
* The while loop used doesn't have a regurlater.
* The value of i is always less that 10 as it doesn't decrease.
*/

/*
*        while (i < 10)
*       {
*               putchar(i);
*        }
*/
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
