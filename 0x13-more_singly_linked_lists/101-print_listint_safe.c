#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;
    unsigned long int addr;

    while (current != NULL)
    {
        addr = (unsigned long int)current;
        printf("[%p] %d\n", (void *)current, current->n);

        count++;
        current = current->next;

        if (addr <= (unsigned long int)current)
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            break;
        }
    }

    return (count);
}
