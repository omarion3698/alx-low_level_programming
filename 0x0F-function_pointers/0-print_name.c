#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - prints the name of a person
 * @name: the person's name
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
