#include "monty.h"

/**
 * free_stack - Frees a doubly linked list.
 * @head: Pointer to the head of the stack
 */
void free_stack(stack_t *head)
{
    stack_t *current, *temp;

    current = head;

    /** Traverse the list and free each node */
    while (current != NULL)
    {
        /** Store the next node before freeing the current one */
        temp = current->next;
        
        /** Free the current node */
        free(current);
		current = temp;
    }
}
