#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * @head: A pointer to the address of the head
 * @idx: the index of the listint_t list where the new node should be added
 * @n: the interger for the new node to contain
 * Return: if the function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));

			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		count++;
	}
	return (NULL);
}
