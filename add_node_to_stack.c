#include "monty.h"

/**
 * add_node_to_stack - Adds a node to the head of the stack.
 * @head: Pointer to the head of the stack
 * @new_value: Value to be added to the new node
 * Return: No return value
 */
void add_node_to_stack(stack_t **head, int new_value)
{
    stack_t *new_node, *temp;

    /** Allocate memory for the new node */
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
		fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    /** Set the value of the new node */
    new_node->n = new_value;
    new_node->prev = NULL;

    /** Update links to add the new node at the head of the stack */
    if (*head != NULL)
    {
        temp = *head;
        temp->prev = new_node;
    }
    new_node->next = *head;
    *head = new_node;
}
