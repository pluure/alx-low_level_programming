#include "lists.h"
/**
 * add_node -  a function that adds a new node at the beginning of a list.
 * @head: pointer to head
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_strg;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_strg = malloc(sizeof(list_t));
	if (!new_strg)
		return (NULL);
	new_strg->str = strdup(str);
	new_strg->len = len;
	new_strg->next = (*head);
	(*head) = new_strg;
	return (*head);


}
