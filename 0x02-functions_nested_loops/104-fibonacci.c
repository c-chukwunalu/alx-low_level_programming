#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */

int main() {
    int a = 1, b = 2, temp, count = 2;

    printf("%d, %d, ", a, b);

    while (count < 98) {
        temp = a + b;
        if (temp < b) {
            // Overflow occurred, break the loop
            break;
        }
        a = b;
        b = temp;
        printf("%d", b);

        if (count < 97) {
            printf(", ");
        }
        
        count++;
    }
    
    printf("\n");
    
    return 0;
}

