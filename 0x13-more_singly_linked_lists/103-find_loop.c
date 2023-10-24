#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: head of a list pointer.
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head, *previous = head;

	while (head && ptr && ptr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = previous;
			previous =  ptr;
			while (1)
			{
				ptr = previous;
				while (ptr->next != head && ptr->next != previous)
				{
					ptr = ptr->next;
				}
				if (ptr->next == head)
					break;

				head = head->next;
			}
			return (ptr->next);
		}
	}

	return (NULL);
}
