#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */

/**
  * main - Adds +ve numbers and prints the result
  * @argc: argument count
  * @argv: arguments array
  *
  * Return: 0 - success or 1 - Error
  */

int main(int argc, char *argv[])
{
	int add = 0, i = 1;
	char *p;

	while (i < argc)
	{
		p = argv[i];
		while (*p != '\0')
		{
			if (!(*p >= 48 && *p <= 57))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
