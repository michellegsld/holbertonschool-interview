#include "holberton.h"

void _return_error(void);
int only_digits(char *num);
int _multiply(char *num1, unsigned int len1, char *num2, unsigned int len2);


/**
 * main - Multiplies two numbers and prints the result
 * @argc: The number of arguments
 * @argv: A list that contains each argument
 *
 * Return: 0 on success or program exits with 98
 */
int main(int argc, char *argv[])
{
	unsigned int len1, len2;

	if (argc != 3)
		_return_error();

	len1 = only_digits(argv[1]);
	len2 = only_digits(argv[2]);

	return (_multiply(argv[1], len1, argv[2], len2));
}

/**
 * _return_error - Prints Error and then exits the program
 */
void _return_error(void)
{
	write(1, "Error\n", 6);
	exit(98);
}

/**
 * only_digits - Confirms if a string consists soley of digits
 * @num: The string being checked
 *
 * Return: The length of the number string
 */
int only_digits(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
			_return_error();
		i++;
	}

	return (i);
}

/**
 * _multiply - Prints the total of two numbers multiplied
 * @num1: The first string to be multiplied
 * @len1: The length of, or number of digits within, num1
 * @num2: The second string to be multiplied
 * @len2: The length of, or number of digits within, len2
 *
 * Return: 0 on success
 */
int _multiply(char *num1, unsigned int len1, char *num2, unsigned int len2)
{
	char *num3;
	int len3 = len1 + len2 + 1, sum = 0;
	int i, j, carry = 0, digit1 = 0, digit2 = 0;

	num3 = malloc(len3 * sizeof(char));
	if (num3 == NULL)
		_return_error();

	for (i = 0; i < len3; i++)
	{
		num3[i] = 0;
	}

	for (i = len1 - 1; i >= 0; i--, carry = 0)
	{
		digit1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';

			sum = digit1 * digit2 + num3[i + j] + carry;

			printf("%d\n", sum);

			carry = sum / 10;
			num3[i + j] = sum % 10;
		}

		if (carry > 0)
			num3[i + j] += carry;
	}

	printf("\n\n\n\n\n\n");
	printf("%s", num3);
	printf("\n\n\n\n\n\n");


	for (i = len3; i >= 0 && num3[i] == 0; i--)
	{
		if (i == 0 && num3[i] == 0)
		{
			_putchar('0');
			_putchar('\n');
			return (0);
		}
	}

	for (; i >= 0; i--)
		_putchar(num3[i] + '0');

	_putchar('\n');
	return (0);
}
