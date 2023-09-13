#include "3-calc.h"

/**
  * op_add - Adds two integers
  * @a: first input integer
  * @b: second input integer
  *
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtracts two integers
  * @a: first input integer
  * @b: second input integer
  *
  * Return: a - b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies two integers
  * @a: first input integer
  * @b: second input integer
  *
  * Return: a * b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Divides two integers
  * @a: first input integer
  * @b: second input integer
  *
  * Return: a / b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - Finds the modulo of two integers
  * @a: first input integer
  * @b: second input integer
  *
  * Return: a % b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
