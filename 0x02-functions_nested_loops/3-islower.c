#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: parameter passed through _islower function
  * Return: depends on the return value.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
