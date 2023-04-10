#include <stdio.h>

/**
  * main - checks for the correctness of the code
  * @argv: character for printing
  * @argc: character for printing
  * Return: Always 0.
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
