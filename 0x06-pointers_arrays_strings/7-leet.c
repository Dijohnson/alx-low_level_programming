#include "main.h"

/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 *
 * a tribute to me and her LOL
 */
char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int vincent;
	int dijohn;

	for (vincent = 0; s[vincent] != '\0'; vincent++)
	{
		for (dijohn = 0; alphaArr[dijohn] != '\0'; dijohn++)
		{
			if (s[vincent] == alphaArr[dijohn])
			{
				s[vincent] = alphaArr[dijohn + 1];
				break;
			}
		}
	}
	return (s);
}
