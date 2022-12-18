#include <stdio.h>
#include <stdlib.h>

// Define a node in a linked list
struct node
{
    int data;
    struct node *next;
};

// Function to detect if a linked list is circular or not
int isCircular(struct node *head)
{
    // Check if the linked list is empty
    if (head == NULL)
        return 0;

    // Initialize a slow and fast pointer to the head of the linked list
    struct node *slow = head;
    struct node *fast = head;

    // Loop until the fast pointer reaches the end of the linked list
    while (fast != NULL && fast->next != NULL)
    {
        // Move the slow pointer one node at a time
        slow = slow->next;

        // Move the fast pointer two nodes at a time
        fast = fast->next->next;

        // If the slow and fast pointers meet, the linked list is circular
        if (slow == fast)
            return 1;
    }

    // If the fast pointer reaches the end of the linked list, it is not circular
    return 0;
}

int main()
{
    // Create a linked list with four nodes

    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = (struct node *)malloc(sizeof(struct node));
    head->next->data = 2;
    head->next->next = (struct node *)malloc(sizeof(struct node));
    head->next->next->data = 3;
    head->next->next->next = (struct node *)malloc(sizeof(struct node));
    head->next->next->next->data = 4;
    head->next->next->next->next = NULL;

    // If we replace NULL with head in the last node, the linked list becomes circular

    // Print whether the linked list is circular or not
    if (isCircular(head))
        printf("Linked list is circular\n");
    else
        printf("Linked list is not circular\n");

    return 0;
}
