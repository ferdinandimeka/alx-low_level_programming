#include "lists.h"

/**
 *print_dlistint - print ll the elements in dlistint_t list.
 *@dlistint_t: structure of the node
 *@h: a variable pointer structure
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	return (i);
}
