#include "stdio.h"
#include "stdlib.h"

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head; // global variable - pointer to the head of the list

void insertAtBeginning(int x);
void insertAtMiddle(int x, int position);
void insertAtEnd(int x);
void print();

int main()
{
    head = NULL; // empty list
    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number\n", i + 1);
        scanf("%d", &x);
        insertAtEnd(x);
        print();
    }
}

void insertAtBeginning(int x)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void insertAtMiddle(int x, int position)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

    if (position == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    Node *current = head;
    for (int i = 0; i < position - 2; i++)
    {
        current = current->next;
    }
    temp->next = current->next;
    current->next = temp;
}

void insertAtEnd(int x)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}

void print()
{
    Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}