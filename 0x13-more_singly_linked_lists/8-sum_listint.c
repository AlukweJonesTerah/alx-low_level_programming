#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * a linked list.
 * @head: head of a list pointer.
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
