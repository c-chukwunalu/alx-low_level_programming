#include <stdlib.h>
#include "main.h"

/**
  * argstostr - concats all command line args passed to a new string
  * @ac: args count
  * @av: args vector
  *
  * Return: pointer to concat string or NULL on failure
  */

char *argstostr(int ac, char **av)
{
	int i = 0, j, k, count = 0;
	char *new_string;

	if (ac == 0 || !(av))
		return (NULL);
	while (i < ac) /* get total str args length */
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		j++;
		count += j;
		i++;
	}
	j = 0;

	/* allocate memory space for all args string */

	new_string = malloc((count + 1) * sizeof(char));
	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}
	i = 0;
	for (i = 0, k = 0; k < count; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(new_string + k) = av[i][j];
			k++;
		}
		*(new_string + k) = '\n'; /* each agrs to next line */
	}
	return (new_string);
}
