#include "sort.h"
/**
 * swap - it swaps 2 elements of arr
 * @a: first element
 * @b: second element
 * Return: no return value
*/
void swap(int *a, int *b)
{int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - sort a n arr with selection_sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: none
*/
void selection_sort(int *array, size_t size)
{size_t i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		swap(&array[min_index], &array[i]);
		print_array(array, size);
	}

}
