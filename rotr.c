#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current = *head, *tail;

    if (*head == NULL || (*head)->next == NULL)
        return;

    while (current->next != NULL)
        current = current->next;

    tail = current;

    current->next = *head;

    current->prev->next = NULL;

    (*head)->prev = NULL;

    *head = current;

    tail->prev = NULL;
}
