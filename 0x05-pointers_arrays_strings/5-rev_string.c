#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
        int i, c;
        char *start, *end, aux;

        c = 0;
        while (s[c] != '\0')
        {
                c++;
        }

        start = s;
        end = s + c - 1; // Point to the last character

        for (i = 0; i < c / 2; i++)
        {
                aux = *start;
                *start = *end;
                *end = aux;
                start++;
                end--;
        }
}

int main(void)
{
    char s[] = "Holberton!";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);

    return 0;
}
