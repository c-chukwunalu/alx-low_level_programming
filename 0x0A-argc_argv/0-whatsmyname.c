#include <stdio.h>

/**
  * main - Prints name of this file
  * @argc: argument count
  * @argv: pointer to argument array
  *
  * Return: Always 0
  */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
