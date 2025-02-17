#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers
 *
 * @array: The array to be sort
 *
 * @size: Number of elements in @array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int idx, stop = 0, nord = 0, c = 0;
	int aux = 0;

	if (size > 1)
	{
		stop = (size - 1) * (size - 1);
		for (idx = 0; idx < (size - 1); idx++)
		{
			c++;
			if (array[idx] > array[idx + 1])
			{
				aux = array[idx + 1];
				array[idx + 1] = array[idx];
				array[idx] = aux;
				nord++;
				print_array(array, size);
			}
			if (idx == size - 2 && nord > 0)
			{
				idx = -1;
				nord = 0;
			}
			if (stop == c)
				idx = size;
		}
	}
}
