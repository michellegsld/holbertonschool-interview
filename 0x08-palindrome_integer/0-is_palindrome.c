#include "palindrome.h"

/**
 * is_palindrome - Checks if a number is a palindrome
 * @n: The given unsigned integer
 *
 * Return: Either 1 if n is a palindrome or 0 if not
 */
int is_palindrome(unsigned long n)
{
	int remain, num, sum = 0;

	for (num = n; n != 0; n = n / 10)
	{
		remain = n % 10;
		sum = sum * 10 + remain;
	}
	if (num == sum)
		return (1);
	else
		return (0);
}
