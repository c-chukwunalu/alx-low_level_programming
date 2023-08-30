#include "main.h"

/**
  * find_sqrt - Finds sqrt of n starting from 0
  * @i: square root of n
  * @n: given number
  *
  * Return: i if n has natural sqrt or -1 otherwise
  */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (find_sqrt(n, i + 1));
}

/**
  * _sqrt_recursion - Calculates the natural sqrt of a given number n
  * @n: input number
  *
  * Return: returns sqrt of n or -1 if n has no natural sqrt
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 0));
}
