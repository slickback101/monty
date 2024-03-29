#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_add(stack_t **head, unsigned int line_number)
{
    stack_t *current;
    int stack_length = 0, sum;

    current = *head;

    /** Calculate the length of the stack */
    while (current != NULL)
    {
        current = current->next;
        stack_length++;
    }

    /** Check if stack has less than two elements */
    if (stack_length < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    current = *head;

    /** Perform addition */
    sum = current->n + current->next->n;
    current->next->n = sum;
    *head = current->next;
    free(current);
}
