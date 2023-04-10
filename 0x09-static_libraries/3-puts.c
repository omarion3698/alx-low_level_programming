#include "main.h"
#include<stdio.h>

/**
  * _puts - function that checks if the number is greater than 0
  * @str: The number to passed through the puts function to be checked
  * Return: Always 0 (Success)
  */
void _puts(char *str)
{
	int a;

	for (a = 0; *str != '\0'; a++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
