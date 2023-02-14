#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @h: pointer to the 1st node of the linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
