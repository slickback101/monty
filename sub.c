#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_sub(stack_t **head, unsigned int line_number)
{
    stack_t *current = *head;
    int node_count = 0, difference;

    while (current != NULL)
    {
        node_count++;
        current = current->next;
    }

    if (node_count < 2)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    difference = (*head)->next->n - (*head)->n;

    (*head)->next->n = difference;
    current = *head;
    *head = (*head)->next;
    free(current);
}
