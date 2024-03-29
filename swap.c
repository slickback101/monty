#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_swap(stack_t **head, unsigned int line_number)
{
    stack_t *current = *head;
    int stack_length = 0, temp;

    while (current != NULL)
    {
        stack_length++;
        current = current->next;
    }

    if (stack_length < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    current = *head;
    temp = current->n;
    current->n = current->next->n;
    current->next->n = temp;
}
