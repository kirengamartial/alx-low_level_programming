#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the input string
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);

    if (len <= 1) /* An empty string or single character is a palindrome */
        return (1);

    return (_check_palindrome(s, len, 0));
}

/**
 * _strlen - returns the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s)
    {
        len++;
        s++;
    }
    return (len);
}

/**
 * _check_palindrome - recursively checks if a string is a palindrome
 * @s: the input string
 * @len: the length of the string
 * @i: the current index
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int len, int i)
{
    if (i >= len / 2)
        return (1);

    if (s[i] != s[len - i - 1])
        return (0);

    return (_check_palindrome(s, len, i + 1));
}
