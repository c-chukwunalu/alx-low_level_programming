#include "main.h"

/**
  * factorial - Calculates the factorial of any given number
  * @n: input int number
  *
  * Return: factorial of n or -1 for n<0
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
