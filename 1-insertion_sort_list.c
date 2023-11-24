#include "sort.h"
/**
 * swap_dll - it swaps a douply linked list
 * @a: current wich is node to be swapped.
 * @b: prev of thhe current.
 * Return : nothing returned.
*/
void swap_dll(listint_t *a, listint_t *b)
{
	a->prev = b->prev;
	b->next = a->next;
	a->next->prev = b;
	b->prev->next = a;
	a->next = b;
	b->prev = a;
}
/**
 * swap_head - it swaps 2 elements at head of the list.
 * @a: node ptr to  smaller element.
 * @b: node ptr to larger element.
 * Return: nothing
*/
void swap_head(listint_t *a, listint_t *b)
{
	a->next->prev = b;
	b->next = a->next;
	a->prev = b->prev;
	a->next = b;
	b->prev = a;

}
/**
 * insertion_sort_list - it sort adoubly_linked_list using insertion sort
 * @list: head of the list
*/
void insertion_sort_list(listint_t **list)
{listint_t *current, *next_itr;

	if (list == NULL || (*list)->next == NULL)
		return;
	current  = (*list)->next;
	while (current != NULL)
	{
		next_itr = current->next;
		while (current->n < current->prev->n)
		{
			if (current->prev->prev == NULL)
			{
				swap_head(current, current->prev);
				*list = current;
				print_list(*list);
				break;
			}
			else if (current->next == NULL)
			{
				current->next = current->prev;
				current->next->next = NULL;
				current->prev = current->next->prev;
				current->next->prev->next = current;
				current->next->prev = current;
				print_list(*list);

			}
			else if (current->next == NULL && current->rprev->prev == NULL)
			{
				current->next = current->prev;
				current->prev = NULL;
				current->next->prev = current;
				current->next->next = NULL;
			}
			swap_dll(current, current->prev);
			print_list(*list);
		}
		current = next_itr;
	}
}
