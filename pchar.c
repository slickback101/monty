#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack, followed by a new line.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_pchar(stack_t **head, unsigned int line_number)
{
    stack_t *current;
    current = *head;

    /** Will check if the stack is empty */
    if (!current)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /** Will check if the value is out of range for ASCII characters */
    if (current->n > 127 || current->n < 0)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", current->n);
}
