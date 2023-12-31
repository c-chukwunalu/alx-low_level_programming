#include "function_pointers.h"

/**
  * print_name - prints a name from using a funct pointer
  * @name: input name
  * @f: pointer function
  *
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
