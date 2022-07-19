#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to the address of the head of a listint_t list
 * @n: The interger for the new node to contain
 * Return: if the function fails NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{

		*head = new;
		return (new);

	}

	tail = *head;

	while (tail->next != NULL)

		tail = tail->next;

	tail->next = new;

	return (new);

}
