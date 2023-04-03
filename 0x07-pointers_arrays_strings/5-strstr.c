#include <stdio.h>
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
		char *on = haystack;
		char *tw = needle;

		while (*on == *tw && *tw != '\0')
		{
			on++;
			tw++;
		}

		if (*tw == '\0')
			return (haystack);
	}

	return (NULL);
}
