#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		j = 0;

		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;

			} while (haystack[j] == needle[j]);
		}

		haystack++;
	}

	return ('\0');
}
