#include "holberton.h"

/**
 * wildcmp - Recursively compares two strings to determine if they're identical
 * @s1: First string to be compared
 * @s2: Second string being compared to
 *
 * Return: Either 1 if the strings are identical or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 != '\0') && (*s2 != '\0'))		/* Not end of strings */
	{
		if (*s2 == '*')						/* * can replace any character(s) */
		{
			if (*(s2 + 1) == '*')				/* checks for multiple * in s2 */
				return (wildcmp(s1, s2 + 1));
			if (*(s1 + 1) == '\0')			/* Checks if s1 string reaches end */
				return (1);
			else if (*(s1 + 1) != *(s2 + 1))	/* if true: * accounts for current char */
				return (wildcmp(s1 + 1, s2));	/*			being checked in s1			*/
			else
				return (wildcmp(s1 + 1, s2 + 1));	/* Check next chars in both strings */
		}
		if (*s1 == *s2)							/* if both chars are identical */
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 == '\0')		/* End of both strings was reached */
		return (1);
	else if		/* if reached end of s1 and s2 ends in an * then return 1 */
		(((*s1 == '\0') && ((*s2 == '*')) && (*(s2 + 1) == '\0')))
		return (1);

	return (0);
}
