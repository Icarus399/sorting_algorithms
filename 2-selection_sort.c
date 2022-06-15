#include "sort.h"

/**
 * swap - swap with the use of pointers
 * using the Selection sort algorithm
 *@a: int
 *@b: integer
 *
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to an array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (k != i)
		{
			swap(&array[k], &array[i]);
			print_array(array, size);
		}
	}
}
