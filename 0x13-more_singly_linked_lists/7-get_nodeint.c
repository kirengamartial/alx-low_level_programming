#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If the node does not exist, return NULL. Otherwise, return the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head != NULL)
    {
        if (i == index)
            return (head);
        head = head->next;
        i++;
    }

    return (NULL); /* Index out of range or empty list */
}
