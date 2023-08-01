#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - lists to be printed
 * @h: a ponter to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		printf ("%d\n", h->n);
	h = h->next;
	node_counter++;
}
return (node_counter);


}
