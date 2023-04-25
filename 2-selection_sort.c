#include "sort.h"
/**
 * selection_sort - sorts arrays using selection sort
 *
 * @array: array to sort
 * @size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t  minIndex = 0;
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[minIndex] > array[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			temp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
