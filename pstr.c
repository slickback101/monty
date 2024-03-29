#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack, followed by a new line.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_pstr(stack_t **head, unsigned int line_number)
{
    stack_t *current;
    (void)line_number;

    current = *head;

    while (current != NULL && current->n > 0 && current->n <= 127)
    {
        printf("%c", current->n);
        current = current->next;
    }

    printf("\n");
}
