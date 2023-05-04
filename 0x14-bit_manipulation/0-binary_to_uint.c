#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to
 * an unsigned int
 * @b: where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;

	for (b[i] != '0'; i++)
	{
		if (b[i] == '1')
			num = (num << 1) | 1;
		else if (b[i] == '0')
			num <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (num);
}
