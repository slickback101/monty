#include "monty.h"

/**
 * f_div - Divides the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_div(stack_t **head, unsigned int line_number)
{
    stack_t *current;
    int stack_length = 0, division_result;

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
        fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    current = *head;

    /** Check for division by zero */
    if (current->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /** Perform the division */
    division_result = current->next->n / current->n;
    current->next->n = division_result;
    *head = current->next;
    free(current);
}
