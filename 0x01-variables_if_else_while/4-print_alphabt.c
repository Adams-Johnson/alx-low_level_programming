#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
    char s = 'a';

    while (s <= 'z') {
        if (s != 'e' && s != 'q') {
            putchar(s);
        }
        s++;
    }

    putchar('\n');
    return 0;
}

