#include "main.h"

/**
  * _abs -  computes the absolute value of an integer
  * @j: parameter for _abs function
  * Return: 0
  */
int _abs(int j)
{
	return (j * ((j > 0) - (j < 0)));
}
