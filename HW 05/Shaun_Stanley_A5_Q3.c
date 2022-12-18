#include <stdio.h>
#include <stdlib.h>

// Define a node in a linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node in a linked list
struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to check if two linked lists have at least one node value in common
int haveCommonNode(struct Node *list1, struct Node *list2)
{
    // Loop through all nodes in the first linked list
    while (list1 != NULL)
    {
        // Save the value of the current node in the first linked list
        int val1 = list1->data;

        // Loop through all nodes in the second linked list
        struct Node *temp = list2;
        while (temp != NULL)
        {
            // Check if the value of the current node in the second linked list
            // is the same as the value of the node in the first linked list
            if (temp->data == val1)
            {
                // If they are equal, the two linked lists have a node value in common
                return 1;
            }

            // Move to the next node in the second linked list
            temp = temp->next;
        }

        // Move to the next node in the first linked list
        list1 = list1->next;
    }

    // If the program reaches this point, it means that the two linked lists
    // do not have any node values in common
    return 0;
}

int main()
{
    // Create two linked lists
    struct Node *list1 = newNode(1);
    list1->next = newNode(2);
    list1->next->next = newNode(7);

    struct Node *list2 = newNode(4);
    list2->next = newNode(5);
    list2->next->next = newNode(6);

    // Check if the two linked lists have at least one node value in common
    int result = haveCommonNode(list1, list2);
    if (result)
    {
        printf("The two linked lists have at least one node value in common.\n");
    }
    else
        printf("The two linked lists have no node value in common.\n");

    return 0;
}