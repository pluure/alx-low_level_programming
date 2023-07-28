#include "lists.h"
/**
 * free_list - a function tha frees
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;


	}


}
