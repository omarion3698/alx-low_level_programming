#include <stdio.h>

/**
  * main - Prints single digit numbers of base 10 starting from 0 on newline
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
