#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    struct NODE *prev;
    int data;
    struct NODE *next;

} Node;

Node *insert_beginning(Node* first, int data)
{
    Node* newnode= (Node*)malloc(sizeof(Node));
    newnode-> data=data;
    newnode->next=first;
    newnode->prev=NULL;
    if (first!=NULL)
    {
        first->prev=newnode;
    }
    return newnode;
}

void *insert_end(Node* first, int data)
{
    Node* curr=NULL;
    Node*newnode=(Node*)malloc(sizeof(Node));
    if (first!=NULL)
    {
        for (curr=first; curr->next!=NULL; curr=curr->next);
        curr->next=newnode;
    }
    else
        first=newnode;
    newnode->data=data;
    newnode->next =NULL;
    newnode->prev= curr;
}

Node* delete_beginning(Node* first)
{
    int *ptr;
    Node *newfirst = first->next;
    *ptr = first->data;
    free(first);
    return newfirst;
}


int delete_end(Node* first)
{
    Node* curr;
    int data;
    for (curr=first; curr->next->next!=NULL; curr=curr->next);
    data=curr->next->data;
    free(curr->next);
    curr->next=NULL;
    return data;
}

void display(Node *first)
{
    Node *curr;
    for (curr = first; curr != NULL; curr = curr->next)
    {
        printf("|%d|->", curr->data);
    }
    printf("NULL\n");
}

int main()
{
    Node *list = NULL;
    int value;
    list=insert_end(list, 32);
    display(list);
    list= insert_beginning(list, 12);
    display(list);
    list= insert_beginning(list, 82);
    display(list);
    list=insert_end(list, 26);
    display(list);
    list=delete_end(list);
    display(list);
    return 0;

}
