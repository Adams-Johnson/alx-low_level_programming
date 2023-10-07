#include <stdio.h>

int main(void)
{
    char s = 'f';

    while (s <= 'z') {
        putchar(s);
        s++;
    }

    putchar('\n');
    return 0;
}
