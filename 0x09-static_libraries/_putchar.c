#include "main.h"
#include <unistd.h>

/**
  * _putchar - prints character to stdout
  * @c: input character
  *
  * Return: int ASCII of input character
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
