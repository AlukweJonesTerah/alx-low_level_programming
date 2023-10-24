#include "lists.h"
/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t ptr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ptr++;
	}
	return (ptr);
}
