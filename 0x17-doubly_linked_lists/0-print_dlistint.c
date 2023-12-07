#include "lists.h"
/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list.
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count_num = 0;

	if (h == NULL)
		return (count_num);

	for (;h->prev != NULL;)
		h = h->prev;

	for (;h != NULL;)
	{
		printf("%d\n", h->n);
		count_num++;
		h = h->next;
	}

	return (count_num);
}