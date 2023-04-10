#include <stdio.h>
#include <stdlib.h>

/**
  * main - checks for the multiplication of two numbers
  * @argc: number of arguments passed through the function
  * @argv: array that points to the string arguments
  * Return: return result of the multiplication or 1 if none
  */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi prototype converts a string to an int */
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
