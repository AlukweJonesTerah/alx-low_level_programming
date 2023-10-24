#include "lists.h"
/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list
 * @h: head of a list pointer.
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t ptr = 0;

	while (h != NULL)
	{
		h = h->next;
		ptr++;
	}
	return (ptr);
}
