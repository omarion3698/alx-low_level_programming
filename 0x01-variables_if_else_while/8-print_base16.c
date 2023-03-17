#include <stdio.h>

/**
  * main - Prints all numbers of base 16 in lowercase
  *
  * Return: Always 0.
  */
int main(void)
{
	char hex;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
