#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current = *head, *new_head;

    if (*head == NULL || (*head)->next == NULL)
        return;

    while (current->next != NULL)
        current = current->next;

    new_head = (*head)->next;

    current->next = *head;

    (*head)->prev = current;

    (*head)->next = NULL;

    new_head->prev = NULL;

    *head = new_head;
}
