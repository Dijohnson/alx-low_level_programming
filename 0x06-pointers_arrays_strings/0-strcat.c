#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src,
 * @dest: A pointer to the string to be concantenated upon.
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
