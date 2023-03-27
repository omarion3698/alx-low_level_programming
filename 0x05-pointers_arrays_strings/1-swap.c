#include "main.h"

/**
  * swap_int - function that swaps the values of two integers
  * @a: first value to swap
  * @b: second value to swap
  * Return: Always 0
  */
void swap_int(int *a, int *b)
{
	int interchange;

	interchange = *a;
	*a = *b;
	*b = interchange;
}
