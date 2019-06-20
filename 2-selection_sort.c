#include "sort.h"

/**
 * selection_sort - Function that sorts an array of integers
 *
 * @array: The array to be sort
 *
 * @size: Number of elements in @array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int idx = 0, jdx = 0, nord = 0;
	int aux = 0;

	if (array != NULL && size >= 2)
	{
		for (idx = 0; idx < (size - 1); idx++)
		{
			aux = idx;

			for (jdx = idx + 1; jdx < size; jdx++)
			{
				if (array[jdx] < array[aux])
				{
					aux = jdx;
				}
			}

			nord = array[aux];
			array[aux] = array[idx];
			array[idx] = nord;

			if (array[aux] != array[idx])
				print_array(array, size);
		}
	}
}
