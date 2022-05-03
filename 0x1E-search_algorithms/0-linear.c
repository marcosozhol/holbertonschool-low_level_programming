#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search fo
 * Return:  the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
    int x;
    size_t i;

    for (i = 0; i <= size; i++)
    {
        printf ("Value checked array[%ld] = [%d]", i, array[i]);
        if (value == array[i])
        {
            return (i);
        }
        else
        {
            return (-1);
        }
    }
    return (0);
}
