#include "main.h"

/**
 * rec_length - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */

int rec_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + rec_length(s + 1));
}

/**
 * rec_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @left: leftmost index
 * @right: rightmost index
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int rec_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (rec_palindrome(s, left + 1, right - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = rec_length(s);

	if (*s == '\0')
	{
		return (1);
	}
	return (rec_palindrome(s, 0, len - 1));
}

