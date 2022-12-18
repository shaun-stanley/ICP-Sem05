#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{

    int val;
    struct node *next;
};

typedef struct node *nodeAddress;

int n;

void printList(struct node *node)
{
    nodeAddress temp = node;
    while (temp->next != node)
    {
        printf("%d ->", temp->val);
        temp = temp->next;
    }
    printf(" %d", temp->val);
}

nodeAddress createCircularLinkedList()
{
    printf("enter the size of the list\n");
    scanf("%d", &n);
    nodeAddress head = malloc(sizeof(struct node));
    nodeAddress temp = head;
    printf("enter values\n");
    scanf(" %d\n", &temp->val);
    for (int i = 1; i < n; i++)
    {
        temp->next = malloc(sizeof(struct node));
        temp = temp->next;
        scanf("%d", &temp->val);
    }
    temp->next = head;

    return head;
}

nodeAddress addAtBeginning(nodeAddress node, int val)
{
    nodeAddress newHead;
    newHead = malloc(sizeof(struct node));
    newHead->val = val;
    nodeAddress temp = node;
    while (temp->next != node)
    {
        temp = temp->next;
    }
    newHead->next = node;
    temp->next = newHead;

    return newHead;
}

nodeAddress addAtEnd(nodeAddress head, int val)
{
    nodeAddress temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = malloc(sizeof(struct node));
    temp->next->val = val;
    temp = temp->next;
    temp->next = head;

    return head;
}

nodeAddress addAfterNode(nodeAddress head, int AfterNode, int val)
{
    nodeAddress temp = head;
    while (temp->next != head)
    {
        if (temp->val == AfterNode)
        {
            nodeAddress advance = temp->next;
            temp->next = malloc(sizeof(struct node));
            temp->next->val = val;
            temp->next->next = advance;
            return head;
        }
        temp = temp->next;
    }
    printf("Node not found");
    return head;
}

nodeAddress deleteAtBeginning(nodeAddress head)
{
    nodeAddress newHead = head->next;
    nodeAddress temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newHead;
    free(head);
    return newHead;
}

nodeAddress deleteAtEnd(nodeAddress head)
{
    nodeAddress temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    nodeAddress delete = temp->next;
    temp->next = head;
    free(delete);

    return head;
}

nodeAddress deleteAfterNode(nodeAddress head, int node)
{
    nodeAddress temp = head;
    while (temp->next != head)
    {
        if (temp->next->val == node)
        {
            nodeAddress temp2 = temp->next->next;
            free(temp->next);
            temp->next = temp2;
            return head;
        }
        temp = temp->next;
    }
    printf("node not found");
    return head;
}

int search(nodeAddress head, int val)
{
    nodeAddress temp = head;
    while (temp->next != head)
    {
        if (temp->val == val)
        {
            printf("Yes, %d is in the list", val);
            return 0;
        }
        temp = temp->next;
    }
    printf("No, %d is not in the list", val);
    return 0;
}

int main()
{
    nodeAddress head = createCircularLinkedList();
    search(head, 12);
    printf("\n");
    printList(head);
    return 0;
}