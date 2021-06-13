#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * order using the Selection sort algorithm
 * @array: the array to sort
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t idx = 0;
	size_t sub_i;
	size_t islower;
	int aux;

	while (idx <= size - 1)
	{
		islower = idx;
		sub_i = idx + 1;
		for (; sub_i <= size - 1; sub_i++)
		{
			if (array[islower] < array[sub_i])
				islower = islower;
			else
				islower = sub_i;
		}
		if (islower != idx)
		{
			aux = array[idx];
			array[idx] = array[islower];
			array[islower] = aux;
			print_array(array, size);
		}
		idx++;
	}
}
