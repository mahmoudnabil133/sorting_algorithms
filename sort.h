#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partetion(int *array, int low, int high, int n);
void quick_sort_helper(int *array, int low, int high, int n);
void heap_sort(int *array, size_t size);
void heapfy(int *arr, int n, int size, int i);
void swap_dll(listint_t *a, listint_t *b);
void swap_head(listint_t *a, listint_t *b);

#endif
