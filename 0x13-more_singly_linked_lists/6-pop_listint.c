#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - removes the head node
 * @head: a pointer to the address of the head
 * Return: if list is empty -0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retn;

	if (*head == NULL)
		return (0);

	tmp = *head;
	retn = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (retn);


}
