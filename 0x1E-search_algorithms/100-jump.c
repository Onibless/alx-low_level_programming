#include "search_algos.h"
#include <math.h>
/**
 *min - a function that gets the lowest of two integers
 *@a:  an integer value to be checked
 *@b: an integer value to be checked
 *Return: return the lowest of the two integers
 */
size_t min(int a, int b)
{
	return (a <= b ? a : b);
}
/**
 *jump_search - a function that searches for a
 *	value in an array of integers using the Linear
 *	search algorithm
 *@array:  a pointer to the first element of the array
 *	to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: return the first index where value is located
 *	If value is not present in array or if array is NULL,
 *	returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, prev = 0/*, i*/;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (; step < size && array[step] < value; prev = step, step += sqrt(size))
	{
		/*for (i = 0; i <= step; i++)*/
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	for (; prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
