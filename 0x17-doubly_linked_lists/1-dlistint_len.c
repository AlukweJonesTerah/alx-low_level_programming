#include "lists.h"
/**
 * dlistint_len -  a function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_num = 0;

	if (h == NULL)
		return (count_num);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		count_num++;
		h = h->next;
	}

	return (count_num);
}
