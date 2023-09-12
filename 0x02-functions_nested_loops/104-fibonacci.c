#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;

    return (len);
}

/**
 * rev_string - Reverse a string.
 * @s: The input string.
 */
void rev_string(char *s)
{
    int i, j;
    char temp;

    i = 0;
    j = _strlen(s) - 1;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

/**
 * add_strings - Adds two strings representing numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * @result: A buffer to store the result.
 * @bufsize: The size of the buffer.
 *
 * Return: 1 if the result overflows the buffer, 0 otherwise.
 */
int add_strings(char *num1, char *num2, char *result, int bufsize)
{
    int carry = 0;
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int max_len = len1 > len2 ? len1 : len2;
    int i, j, k;

    if (max_len + 1 > bufsize)
        return (1);

    rev_string(num1);
    rev_string(num2);

    for (i = 0, j = 0, k = 0; k < max_len; i++, j++, k++)
    {
        int digit1 = i < len1 ? num1[i] - '0' : 0;
        int digit2 = j < len2 ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        result[k] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry > 0)
    {
        if (k + 1 >= bufsize)
            return (1);

        result[k] = carry + '0';
        result[k + 1] = '\0';
    }
    else
    {
        result[k] = '\0';
    }

    rev_string(result);
    return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char fibonacci[98][1000]; // To store each Fibonacci number
    char comma_space[] = ", ";
    char newline[] = "\n";
    int i;

    strcpy(fibonacci[0], "1");
    strcpy(fibonacci[1], "2");

    for (i = 2; i < 98; i++)
    {
        if (add_strings(fibonacci[i - 2], fibonacci[i - 1], fibonacci[i], sizeof(fibonacci[i])))
        {
            char overflow_error[] = "Buffer overflow occurred\n";
            write(2, overflow_error, _strlen(overflow_error));
            return (1);
        }
    }

    for (i = 0; i < 97; i++)
    {
        write(1, fibonacci[i], _strlen(fibonacci[i]));
        write(1, comma_space, _strlen(comma_space));
    }

    write(1, fibonacci[97], _strlen(fibonacci[97]));
    write(1, newline, _strlen(newline));

    return (0);
}
