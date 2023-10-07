#include <stdio.h>
/**
 * main- entry point
 * Return: 0
 */

int main(void)
{
    char j = 'j';
    char J = 'J';

    while (j <= 'z') {
        putchar(j);
        j++;
    }

    while (J <= 'Z') {
        putchar(J);
        J++;
    }

    putchar('\n');
    return 0;
}

