#include "lists.h"

/**
 * sum_listint - A function that calculates the sum of all the data
 * @head: A first node
 *
 * Return: The resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
