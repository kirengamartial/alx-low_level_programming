#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - Entry point
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1); // Return 1 to indicate an error
    }
    
    print_tab(tab); // Print the words
    
    // Free the allocated memory for the words and the array of pointers
    free(tab);
    
    return (0); // Return 0 to indicate success
}