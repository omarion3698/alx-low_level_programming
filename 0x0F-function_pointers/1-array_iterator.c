#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of an array
 * @array: the given array
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;

	if (array == NULL || action == NULL)
	return;

	for (j = 0; j < (int) size; j++)
	{
		action(array[j]);
	}
}
