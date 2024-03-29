#include "monty.h"

/**
 * f_queue - Sets the stack mode to queue.
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 * Return: No return value
 */
void f_queue(stack_t **head, unsigned int line_number)
{
    (void)head;
    (void)line_number;

    bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 * @head: Pointer to the head of the stack
 * @new_value: New value to be added
 * Return: No return value
 */
void addqueue(stack_t **head, int new_value)
{
    stack_t *new_node, *temp;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = new_value;
    new_node->next = NULL;

    if (*head != NULL)
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = new_node;
        new_node->prev = temp;
    }
    else
    {
        *head = new_node;
        new_node->prev = NULL;
    }
}
