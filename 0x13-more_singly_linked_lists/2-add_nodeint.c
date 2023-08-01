#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - a function that adds new nodes at beginning
 * @head: the beginning of the list
 * @n: nodes
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);


}
