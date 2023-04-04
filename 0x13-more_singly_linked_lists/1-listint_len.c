#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
 size_t add = 0;

while (h != NULL)
{
add= add + 1;
h = h->next;
}

return (add);
}
