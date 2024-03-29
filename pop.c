#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_pop(stack_t **head, unsigned int line_number)

{
    stack_t *temp;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    temp = *head;
    *head = temp->next;
    free(temp);
}
