#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            if (in_word)
            {
                in_word = 0;
            }
        }
        else
        {
            if (!in_word)
            {
                in_word = 1;
                count++;
            }
        }
        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    int i, j, k, len, words;
    char **word_array;

    if (str == NULL || *str == '\0')
        return (NULL);

    words = count_words(str);

    if (words == 0)
        return (NULL);

    word_array = malloc(sizeof(char *) * (words + 1));

    if (word_array == NULL)
        return (NULL);

    for (i = 0; i < words; i++)
    {
        while (*str == ' ')
            str++;
        len = 0;
        while (str[len] != ' ' && str[len] != '\0')
            len++;
        word_array[i] = malloc(sizeof(char) * (len + 1));

        if (word_array[i] == NULL)
        {
            for (k = 0; k < i; k++)
                free(word_array[k]);
            free(word_array);
            return (NULL);
        }

        for (j = 0; j < len; j++)
            word_array[i][j] = *str++;

        word_array[i][j] = '\0';
    }

    word_array[i] = NULL;

    return (word_array);
}
