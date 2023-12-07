#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
        current = current->next;
        count++;
    }

    return count;
}
