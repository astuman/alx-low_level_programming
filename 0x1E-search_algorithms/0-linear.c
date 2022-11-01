#include "search_algos.h"

/**
 * linear_search -perform a linear search
 * @
 * 
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    if(!array)
        return (-1);
    while (i < size)
    {
        print("[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-i);
}