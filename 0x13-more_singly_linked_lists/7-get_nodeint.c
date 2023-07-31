#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the node at a certain index
 * @head:A first node
 * @index: A index
 *
 * Return: A pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
