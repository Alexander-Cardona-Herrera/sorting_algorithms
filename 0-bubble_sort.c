#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: the array to sort
* @size: size of the array
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t idx = 0;
	size_t temp_size = size;
	int aux;

	if (size == 0)
		return;

	while (temp_size)
	{
		if (array[idx] <= array[idx + 1])
		{
			idx++;
			continue;
		}
		while (idx < temp_size - 1)
		{
			if (array[idx] > (array[idx + 1]))
			{
				aux = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = aux;
				print_array(array, size);
			}
			idx++;
		}
		idx = 0;
		temp_size -= 1;
	}
}
