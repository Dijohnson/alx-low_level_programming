#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src,
 * @dest: A pointer to the string to be concantenated upon.
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
