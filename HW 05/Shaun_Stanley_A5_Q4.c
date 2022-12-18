#include <stdio.h>
#include <stdlib.h>

// Define a node of a linked list
struct node
{
    int data;
    struct node *next;
};

// Function to check if two linked lists have a common node value
// takes as input the pointers to the head nodes of both lists
int checkCommon(struct node *head1, struct node *head2)
{
    // Create two temporary pointers to traverse both linked lists
    struct node *temp1 = head1;
    struct node *temp2 = head2;

    // Loop until the end of both lists is reached
    while (temp1 != NULL && temp2 != NULL)
    {
        // Check if the current node value of both lists are equal
        if (temp1->data == temp2->data)
        {
            // If equal, return 1 as a common node value has been found
            return 1;
        }

        // Move to the next node in both lists
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    // if end of both lists is reached without finding a common node value, return 0
    return 0;
}

int main()
{
    // Create two linked lists with some common node values
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 1;
    head1->next = (struct node *)malloc(sizeof(struct node));
    head1->next->data = 2;
    head1->next->next = (struct node *)malloc(sizeof(struct node));
    head1->next->next->data = 3;
    head1->next->next->next = (struct node *)malloc(sizeof(struct node));
    head1->next->next->next->data = 4;
    head1->next->next->next->next = NULL;

    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    head2->data = 10;
    head2->next = (struct node *)malloc(sizeof(struct node));
    head2->next->data = 4;
    head2->next->next = (struct node *)malloc(sizeof(struct node));
    head2->next->next->data = 3;
    head2->next->next->next = (struct node *)malloc(sizeof(struct node));
    head2->next->next->next = NULL;

    int result = checkCommon(head1, head2);
    if (result == 1)
        printf("At least one common node value is present in the linked lists.\n");
    else
        printf("No common node values are present in the linked lisr.xs\n");
    return 0;
}
