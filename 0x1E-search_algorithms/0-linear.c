#include "search_algos.h"

/**
 * linear_search - performs search
 * @array: the  array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index 1 or -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}