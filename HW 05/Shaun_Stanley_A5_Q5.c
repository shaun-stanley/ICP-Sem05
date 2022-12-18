#include <stdio.h>
#include <stdlib.h>

// Define a structure for each node in the tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Create a new node in the tree
struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// function to insert a new node in the tree
void insert_node(struct node **root, int data)
{
    // if the tree is empty, create a new node as the root node
    if (*root == NULL)
    {
        *root = create_node(data);
        return;
    }

    // traverse the tree to find the appropriate position for the new node
    if (data <= (*root)->data)
        insert_node(&(*root)->left, data);
    else
        insert_node(&(*root)->right, data);
}

// display the tree in in-order traversal
void display_tree(struct node *root)
{
    if (root == NULL)
        return;

    display_tree(root->left);
    printf("%d ", root->data);
    display_tree(root->right);
}

int main()
{
    struct node *root = NULL;

    // insert some values in the tree
    insert_node(&root, 10);
    insert_node(&root, 5);
    insert_node(&root, 15);
    insert_node(&root, 10);
    insert_node(&root, 7);
    insert_node(&root, 10);

    // display the tree
    printf("The tree in in-order traversal: ");
    display_tree(root);

    return 0;
}