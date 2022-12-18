#include <stdio.h>
#include <stdlib.h>

// Define a node in a linked list
typedef struct node
{
    int data;
    struct node *next;
} node;

// Reverses the linked list and returns the new head
node *reverse(node *head)
{
    // If the linked list is empty or has only one element,
    // there is nothing to do
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // Reverse the rest of the linked list using recursion
    node *new_head = reverse(head->next);

    // Set the next node of the current head to NULL
    head->next->next = head;
    head->next = NULL;

    return new_head;
}

// Createa a function to print the linked list
void print_list(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    // Create a linked list
    node *head = malloc(sizeof(node));
    head->data = 2;
    head->next = malloc(sizeof(node));
    head->next->data = 4;
    head->next->next = malloc(sizeof(node));
    head->next->next->data = 6;
    head->next->next->next = NULL;

    // Print the original linked list
    printf("Original linked list: ");
    print_list(head);

    // Reverse the linked list and print it
    head = reverse(head);
    printf("Reversed linked list: ");
    print_list(head);

    return 0;
}
