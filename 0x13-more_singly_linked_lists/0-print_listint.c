#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the element of a listint list
 * @h: list to print
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
