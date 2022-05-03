import "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search fo
 * Return:  the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
    int aux, x;
    size_t i;

    for (i = 0; i <= size; i++)
    {
        printf ("Value checked array[%d] = [%d]", i, array[x]);
        if (value == array[x])
        {
            return (i);
        }
        else
        {
            return (-1);
        }
    }
}