#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * num_checker - checks for a number otherwise returns 0
  * @a: character passed for checking
  * Return: if it is a number return 1, otherwise return 0
  */
int num_checker(char *a)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = strlen(a);
	while (i < k)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
		{
			j = j * 10 + (a[i] - '0');
			i++;
		}
	}
	return (j);
}

/**
  * main - adds positive integers
  * @argc: argument for counting the number of arg passed
  * @argv: points to the array for arguement strings
  * Return: output k(summation) or 1
  */

int main(int argc, char *argv[])
{
	int i, j, k;

	k = 0;
	for (i = 1; i < argc; i++)
	{
		j = num_checker(argv[i]);
		if (j == -1)
		{
			printf("Error\n");
			return (1);
		}
		k += j;
	}
	printf("%d\n", k);
	return (0);
}
