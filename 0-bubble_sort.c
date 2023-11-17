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
 * bubble_sort - it sorts an array with comparison and swaping
 * @array: arr to be sorted
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	int i, j;

	if (size < 2)
		return;
	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
