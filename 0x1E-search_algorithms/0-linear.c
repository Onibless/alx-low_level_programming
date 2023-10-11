#include "search_algos.h"
/**
 *binary_search - a function that searches for a
 *	value in an array of integers using the Binary
 *	search algorithm
 *@array:  a pointer to the first element of the array
 *	to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: return the first index where value is located
 *	If value is not present in array or if array is NULL,
 *	returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (l <= r)
	{
		m = (r + l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
			printf("%d%s", array[i], i == r ? "\n" : ", ");
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (array[m]);
	}
	return (-1);

}
