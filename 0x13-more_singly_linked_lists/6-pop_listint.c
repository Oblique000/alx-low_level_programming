#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: A pointer
 *
 * Return: The data inside the elements or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
