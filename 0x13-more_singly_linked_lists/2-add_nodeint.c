#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of listint_t list
 *
 * @head: head of a double pointer
 * @n: int that adds the list
 *
 * Return: NULL if any error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
