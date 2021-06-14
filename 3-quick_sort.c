#include "sort.h"

int partition(int *array, int l, int r, size_t size);
void q_sort(int *array, int l, int r, size_t size);

/**
 * quick_sort - sorts an array of integers in ascending order
 * order using the quick sort algorithm
 * @array: the array to sort
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int l = 0;
	int r = size - 1;

	if (size < 2)
		return;

	q_sort(array, l, r, size);

}
/**
 * q_sort - sorts an array of integers in ascending order for the new list
 * @array: the new array to sort
 * @l: left position of the pivot
 * @r: right position of the pivot
 * Return: Nothing
 */
void q_sort(int *array, int l, int r, size_t size)
{
	/*m (middle) is pivot dividing the array*/
	int m;

	if (l >= r)
		return;
	m = partition(array, l, r, size);
	q_sort(array, m + 1, r, size);
	q_sort(array, l, m - 1, size);

}

int partition(int *array, int l, int r, size_t size)
{
	int pivot = array[r];
	int i = l, j, aux;

	for (; i <= r; i++)
	{
		printf("Primer for i = %d\n", i);
		if (array[i] >= pivot)
		{
			printf("r = %d pivot = %d\n", r, pivot);
			for (j = i +1; j <= r; j++)
			{
				printf("Segundo for i = %d j = %d\n", i, j);
				printf("Segundo for array[i] = %d array[j] = %d\n", array[i], array[j]);
				if (array[j] <= pivot)
				{
					printf("Swaping\n");
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
					print_array(array, size);
				}
				if (j == r)
				{
					printf("retornamos: %d\n", i);
					return (i);
				}
			}
		}
	}
	return (i);
}
