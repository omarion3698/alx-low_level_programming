#include <stdio.h>

/**
  * @argv: parameter used for printing
  * @argc: parameter used for printing
  * Return: Always 0.
  * main - checks for validity of the code
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
