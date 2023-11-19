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
 * heapfy - it create a max heap with max element
 * at the root of the heap tree at arr[0]
 * @arr: arr to get max element
 * @n: num of elemnrts to get max
 * @size: sizeof arr (we just use in print)arr function)
 * @i: element to be swapped with max element
 * Return: nothing
*/
void heapfy(int *arr, int n, int size, int i)
{int largest, left, right;

	largest = i;
	left = 2 * i + 1;
	right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		print_array(arr, size);
		heapfy(arr, n, size, largest);
	}
}
/**
 * heap_sort - it sort an array with o(log(n))
 * @array: array to be sorted
 * @size: size of arr.
 * Return: nothing
*/
void heap_sort(int *array, size_t size)
{int i;
	/*create a max heap*/
	for (i = size / 2 - 1; i >= 0; i--)
	{
		heapfy(array, size, size, i);
	}
	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		heapfy(array, i, size, 0);
	}

}
