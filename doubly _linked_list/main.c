#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    struct NODE *prev;
    int data;
    struct NODE *next;

} Node;

Node *insert_beginning(Node *first, int data)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = first;
    newnode->prev = NULL;
    if (first != NULL)
    {
        first->prev = newnode;
    }
    return newnode;
}

Node *insert_end(Node *first, int data)
{
    Node *curr = NULL;
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;

    if (first != NULL)
    // find the last Node and attach the new node to the last Node
    {
        for (curr = first; curr->next != NULL; curr = curr->next)
            ;
        curr->next = newnode;
    }
    else
        first = newnode;
    newnode->prev = curr;
    return first;
}

Node *delete_beginning(Node *first)
{
    Node *temp = first;
    int data;
    data = first->data;
    first = first->next;
    free(temp);
    printf("Deleted element: %d\n", data);
    return first;
}

Node *delete_end(Node *first)
{
    Node *curr;
    int data;
    first->prev=NULL;
    for (curr = first; curr->next->next != NULL; curr = curr->next);
    data = curr->next->data;
    free(curr->next);
    curr->next = NULL;
    printf("Deleted element:%d\n", data);
    return first;
}

void display(Node *first)
{
    Node *curr;
    printf("NULL->");
    for (curr = first; curr != NULL; curr = curr->next)
    {
        printf("|%d|->", curr->data);
    }
    printf("NULL\n");
}

int choice()
{
    int choice;
    printf("\n********MENU********\n");
    printf("1. insert at the beginning of the list\n");
    printf("2. insert at the end of the list\n");
    printf("3. delete at the beginning of the list\n");
    printf("4. delete at the end of the list\n");
    printf("5. Display\n");
    printf("6. EXIT\n");
    printf("********************");
    printf("\nEnter choice:");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    Node *list = NULL;
    int ch, elmnt;
    while (1)
    {
        ch=choice();
        switch(ch)
        {
        case 1:
            printf("Enter element:");
            scanf("%d", &elmnt);
            list = insert_beginning(list, elmnt);
            break;
        case 2:
            printf("Enter element:");
            scanf("%d", &elmnt);
            list = insert_end(list, elmnt);
            break;
        case 3:
            list=delete_beginning(list);
            break;
        case 4:
            list=delete_end(list);
            break;
        case 5:
            display(list);
            break;
        case 6:
            return 0;

        default:
            printf("Enter correct choice!!!\n\n");
        }
    }
    return 0;
}
