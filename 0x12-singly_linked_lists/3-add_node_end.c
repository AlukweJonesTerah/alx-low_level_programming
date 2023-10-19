#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at
 * the end of a list_t list.
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *temp_val;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[i])
	{
		i++;
	}
	new_node->len = i;
	new_node->next = NULL;
	temp_val = *head;

	if (temp_val == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp_val->next != NULL)
			temp_val = temp_val->next;
		temp_val->next = new_node;
	}

	return (*head);
}
