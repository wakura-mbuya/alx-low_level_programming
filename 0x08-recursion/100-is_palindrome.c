#include "main.h"

/**
 * isPalindromeRecursive - checks if a string is a palindrome
 * @str: The string to be checked
 * @start: First character of the substring of str
 * @end: Last character of the substring of str
 *
 * Return: 1 if str is a palindrome, 0 otherwise
 */
int isPalindromeRecursive(char *str, int start, int end)
{
	/*Base case: if the length is 0 or 1, it's a palindrome */
	if (start >= end)
		return (1);

	/*Base case: if first and last char are different, not palindrome */
	if (str[start] != str[end])
		return (0);

	/* Recursive call: checks substring excluding the 1st and last chars */
	return (isPalindromeRecursive(str, start + 1, end - 1));
}

/**
 * is_palindrome - wrapper func that checks if a string passed is a palindrome
 * @s: the string to be checked if it's a palindrome
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length;
	
	length = _strlen_recursion(s);
	return (isPalindromeRecursive(s, 0, length - 1));
}
