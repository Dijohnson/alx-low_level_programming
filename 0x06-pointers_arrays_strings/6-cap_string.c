#include "main.h"

/**
 * _indexOf - return bool of special char
 * @a: character to return
 * Return: true or false
 * capARR is array capitalized
 */
int _indexOf(char a)
{
	int i;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', '!', '?', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capArrr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - cap each word of the string
 * @s: string
 * Return: the string capitilized
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indexOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}
