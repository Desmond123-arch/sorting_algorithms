#include "sort.h"
/**
 * bubble_sort - implementation of bubble sort algorithim
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;
	size_t  temp;

	while (1)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}

		}
		if (swapped == 0)
			break;
	}
}
