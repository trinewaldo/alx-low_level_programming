#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
  int countna;

  if(argc > 1)
  {
    for(countna = 1; countna < argc; countna ++)
    {
      printf("Name %d is - %s \n", countna, argv[countna]);
    }
  }
 return (0);
}
