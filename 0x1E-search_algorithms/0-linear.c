#include "search_algos.h"

/**
* linear_search - performs linear search
* @array: the array
* @size:  size of array
* @value: value to be searched
*
* Return: the index found or -1
**/
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    if (!array)
        return (-1);
    while (i < size)
    {
        print("Check array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-i);
}