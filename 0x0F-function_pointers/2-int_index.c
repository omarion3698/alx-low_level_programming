#include "function_pointers.h"

/**
 * int_index - function for finding an integer
 * @array: array of data
 * @size: size of the array
 * @cmp: a function pointer
 * Return: integer count
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
