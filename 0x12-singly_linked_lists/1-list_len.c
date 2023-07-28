#include "lists.h"
/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: a pointer
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;

	}
	return (number);


}
