#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t temp = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	while (str[temp])
	{
		temp++;
	}
	new_node->len = temp;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
