#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *m = needle;

		while (*j == *m && *m != '\0')
		{
			j++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
