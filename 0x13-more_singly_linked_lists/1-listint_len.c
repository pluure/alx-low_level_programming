#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - list the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;


	}
	return (elements);


}
