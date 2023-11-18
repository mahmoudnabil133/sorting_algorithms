#include "sort.h"
/**
 * swap - swap 2 elements.
 * @a: a
 * @b:b
 * Return: none
*/
void swap(int *a, int *b)
{int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partetion - find place of the pivot
 * @array: arr to sort
 * @low: low of the arr
 * @high: high of the sublist
 * @size: size of arr to sort it
 * Return: int
*/
int partetion(int *array, int low, int high, int size)
{int pivot = array[high], i, j;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i += 1;

			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[high], &array[i + 1]);
		print_array(array, size);
	}

	return (i + 1);

}
/**
 * quick_sort_helper - help to sort and recursion
 * @array: array
 * @low: low of the recursive list.
 * @high: high of the recursive list
 * @size: size of array
 * Return: none
 *
*/
void quick_sort_helper(int *array, int low, int high, int size)
{int pivot_place;



	if (low < high)
	{
		pivot_place = partetion(array, low, high, size);
		quick_sort_helper(array, low, pivot_place - 1, size);
		quick_sort_helper(array, pivot_place + 1, high, size);
	}
}
/**
 * quick_sort - sort arry in o(nlogn)
 * @array: array to be sorted.
 * @size: size of array
 * Return:nonne
*/
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);

}
