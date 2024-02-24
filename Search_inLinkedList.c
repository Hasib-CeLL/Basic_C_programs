#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node
{
    int data;
    struct Node* next;
};

// Function to search for a value in the linked list
struct Node* search(struct Node* head, int key)
{
    struct Node* current = head;

    while (current != NULL)
    {
        if (current->data == key)
        {
            return current; // Key found, return the node
        }
        current = current->next;
    }

    return NULL; // Key not found in the linked list
}

int main()
{
    // Initialize the linked list
    struct Node* head = NULL;

    // Create nodes and insert data
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = 100;
    node1->next = NULL;
    head = node1; // First element

    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    node2->data = 200;
    node2->next = NULL;
    node1->next = node2; // Second element

    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    node3->data = 300;
    node3->next = NULL;
    node2->next = node3; // Third element

    int keyToSearch = 200;

    // Search for a value in the linked list
    struct Node* result = search(head, keyToSearch);

    if (result != NULL)
    {
        printf("Element %d found in the linked list.\n", keyToSearch);
    }
    else
    {
        printf("Element %d not found in the linked list.\n", keyToSearch);
    }

    // Free memory by deallocating nodes (not shown in detail here)

    return 0;
}
