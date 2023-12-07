#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head != NULL)
	{
		for (;head->prev != NULL;)
			head = head->prev;

		for (sum = 0; head != NULL;)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
