#include "monty.h"

/**
 * f_pall - Prints all elements of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Not used
 * Return: No return value
 */
void f_pall(stack_t **head, unsigned int line_number)
{
    stack_t *current;
    (void)line_number;

    current = *head;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
