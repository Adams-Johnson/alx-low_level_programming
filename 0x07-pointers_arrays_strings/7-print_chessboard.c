#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int r;

	for (j = 0; j < 8; j++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[j][r]);
		_putchar('\n');
	}
}
