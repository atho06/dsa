#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int elmnt;
    struct NODE *next;
} Node;

Node *enqueue(Node *queue, int elmnt)
{

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->elmnt = elmnt;
    newNode->next = queue;
    return newNode;
}

Node *dequeue(Node *queue)
{
    int val;
    Node* curr;
    Node *prev=NULL;
    for (curr=queue; curr!=NULL; prev=curr, curr=curr->next);
    val = curr->elmnt;
    free(curr);
    prev->next=NULL;
    return curr;
}

void display(Node *queue)
{
    Node *curr;
    for (curr = queue; curr != NULL; curr = curr->next)
    {
        printf("%d --> ", curr->elmnt);
    }
    printf(" NULL\n");
}

int choice()
{
    int choice;
    printf("MENU:/n");
    printf("1--> Enqueue\n");
    printf("2--> Dequeue\n");
    printf("3--> Display\n");
    printf("4--> EXIT\n");
    printf("Enter choice:");
    scanf("%d", &choice);
    return choice;
}
int main()
{
    int ch, elmnt;
    printf("QUEUES USING LINKED LISTS\n\n");
    Node *queue=NULL;
    while (1)
    {
        ch=choice();
        switch(ch)
        {
        case 1:
            printf("Enter element:");
            scanf("%d", elmnt);
            enqueue(queue, elmnt);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            display(queue);
            break;
        case 4:
            return 0;

        default:


            printf("Enter correct choice!!!");
        }
    }
    return 0;

}
