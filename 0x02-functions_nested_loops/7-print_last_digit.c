#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: parameter for print_last_digit function
  * Return: value of the last digit
  */
int print_last_digit(int n)
{
	int j;

	j = (n % 10);

	if (j < 0)
	{
		j = (-1 * j);
	}
	_putchar(n + '0');
	return (j);
}
