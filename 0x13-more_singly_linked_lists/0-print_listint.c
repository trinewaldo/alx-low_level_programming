#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @head: linked list of type listint_t to print
 *
 * Return: nodes in the linked list
 */
size_t print_listint(const listint_t *head)
{
 size_t number = 0;

 while (head)
 {
 printf("%d\n", head->n);
 number++;
 head = head->next;
 }

 return (number);
}

