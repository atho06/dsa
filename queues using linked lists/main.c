#include <stdio.h>
#include <stdlib.h>

/*struct node
{
    int value;
    struct node* next;
};
typedef struct node node_t;

void enqueue(queue, elmnt)
{
    node_t queue=malloc(sizeof(node_t));
    queue->elmnt=elmnt;
    queue->next=NULL;
    return queue;
}

void dequeue(queue)
{

}*/

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
    int ch,n=1000;
    printf("QUEUES USING LINKED LISTS\n\n");
    while (n)
    {
        ch=choice();
        if (ch==1 || ch==2 || ch==3 || ch==4)
        {
            switch(ch)
            {
            case 1:
                //enueue(queue, elmnt);
                printf("hey");
            case 2:
                //dequeue(queue);
                printf("hello");
            case 3:
                //display(queue);
                printf("hi");
            case 4:
                n=12;
            }
        }
        else
            {
                printf("Enter correct choice!!!");
                break;
            }
    }
    return 0;

}
