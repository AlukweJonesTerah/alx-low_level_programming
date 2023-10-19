#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list pointer.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t j;

	j = 0;
	for (; h != NULL; j++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (j);
}
