#include "lists.h"

/**
 * listint_len - returns the number of a elements in a linked listint_list
 * @h: printer in the linker list
 *
 * Return: number of the elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
