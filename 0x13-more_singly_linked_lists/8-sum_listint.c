#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - a function that returns the sum of all data
 * of a linked list
 * @head: a pointer to the head of a linked list
 * Return: if list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);

}
