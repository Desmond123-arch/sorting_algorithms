#include "sort.h"

/**
 * quick_sort - sorts a list using quick sort
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort_recursion(array, 0, size - 1);
}

/**
 * quicksort_recursion - recursive function to sort the array using quicksort
 * @array: array to be sorted
 * @low: starting index of the subarray to be sorted
 * @high: ending index of the subarray to be sorted
 */
void quicksort_recursion(int *array, size_t low, size_t high)
{
	int pivot_index;
	if (low < high)
	{
		pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

/**
 * partition - partitions the array into two halves
 * @array: array to be partitioned
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 *
 * Return: the index of the pivot element
 */
int partition(int *array, size_t low, size_t high)
{
	int pivot_value, i;
	size_t j;
	if (array == NULL)
		return -1;
	pivot_value = array[high];
	i = low - 1;
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot_value)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}

    swap(&array[i + 1], &array[high]);

    return i + 1;
}

/**
 * swap - swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
