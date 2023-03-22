#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet,lowercase,on a newline
  *
  * Return: always 0.
  */
void print_alphabet_x10(void)
{
	int repeat;

	repeat = 0;

	while (repeat < 10)
	{
		char letters;

		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		repeat++;
		_putchar('\n');
	}
}
