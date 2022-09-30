#include "main.h"
#define NULL 0

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string o check
 * Return: returns 1 (true) or 0 (false)
 */

int is_palindrome(char *s)
{
	return (_is_palindrome(s, 0, _strlen(s) - 1));
}

/**
 * _strlen - finds the length of a string
 * @s: string argument
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	if (*s == NULL)
	return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @r: right counter
 * @l: left counter
 * Return: returns 1 if string is palindrome else return 0
 */

int _is_palindrome(char *s, int r, int l)
{
	if (*s == NULL)
	return (1);
	if (r >= l)
	return (1);
	if (s[l] == s[r])
	return (_is_palindrome(s, r + 1, l - 1));
	return (0);
}
