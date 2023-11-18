#include "sort.h"
/**
 * insertion_sort_list - it sort adoubly_linked_list using insertion sort
 * @list: head of the list
*/
void insertion_sort_list(listint_t **list)
{listint_t *i, *j, *next_itr;

	// if (!(*list)->next)
	// 	return()

	i = (*list)->next;
	while (i)
	{
		next_itr = i->next;
		j = i->prev;
		while (j->n > i->n && j)
		{
			if (j->prev == NULL)
			{
				i->prev->next = i->next;
				i->next->prev = i->prev;
				i->next = j;
				i->prev = NULL;
				j->prev = i;
				*list = i;
				printf("sa\n");

			}
			j = j->prev;
		}
		if (j)
		{
			i->prev->next = i->next;
			i->next->prev = i->prev;
			i->next = j->next;
			i->prev = j;
			j->next = i;
			print_list(*list);
		}
		i = next_itr;
	}


}
