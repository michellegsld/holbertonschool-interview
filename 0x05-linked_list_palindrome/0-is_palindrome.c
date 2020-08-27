#include "lists.h"

/**
 * check_recursively - Recursively moves the pointers to check if palindrome
 * @start: Will move from the start of the list
 * @end: Will move from the end of the list
 *
 * Return: Either 0 or 1 depending if is a palindrome
 */
int check_recursively(listint_t *start, listint_t *end)
{
	int check;

	if (end == NULL)
		return (1);

	check = check_recursively(start, end->next);

	if (check == 0)
		return (0);

	if (start->n == end->n)
		check = 1;
	else
		check = 0;

	start = start->next;

	return (check);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: The start of the linked list
 *
 * Return: 1 if is palindrome, 0 if it is not
 */
int is_palindrome(listint_t **head)
{
	listint_t *start = *head;
	listint_t *end = *head;

	if (*head == NULL)
		return (1);

	return (check_recursively(start, end));
}
