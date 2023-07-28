#include "lists.h"
/**
 * add_node_end - adds new nodes
 * @head: pointer to the head
 * @str: string pointer
 * Return: the address of the new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_strg;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
		len++;

	new_strg = malloc(sizeof(list_t));
	if (!new_strg)
		return (NULL);
	new_strg->str = strdup(str);
	new_strg->len = len;
	new_strg->next = NULL;

	if (*head == NULL)
	{
		*head = new_strg;
		return (new_strg);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_strg;

	return (new_strg);



}
