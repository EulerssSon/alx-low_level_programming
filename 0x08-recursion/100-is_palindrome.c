#include "main.h"

/**
 * rec_is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @left: leftmost index
 * @right: rightmost index
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int rec_is_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return (rec_is_palindrome(s, left + 1, right - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length;

	if (*s == '\0')
		return (1);
	for (length = 0; s[length] != '\0'; length++)
		;
	return (rec_is_palindrome(s, 0, length - 1));
}

