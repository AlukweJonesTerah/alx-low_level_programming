#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a list.
 * @h: singly linked list pointer.
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t j;

	j = 0;
	for (; h != NULL; j++)
	{
		h = h->next;
	}
	return (j);
}
