#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head)
{
    node_t *temp=head;
    while (temp!=NULL)
    {
        printf("%d->", temp->value);
        temp=temp->next;
    }

}

//function to create a node
node_t *create_node(int value)
{
    node_t *result= malloc(sizeof(node_t));
    result->value=value;
}

int main()
{
   node_t n1, n2, n3;
   node_t *head;

   n1.value=12;
   n2.value=8;
   n3.value=10;
   //linking them...
   head=&n3;
   n3.next=&n2;
   n2.next=&n1;
   n1.next=NULL;
   //inserting new element...
   node_t n4;
   n4.value=13;//allocating space
   //inserting into the middle (i.e. between n2 and n3)
   n4.next= &n1;
   n2.next=&n4;


   printlist(head);

   return 0;
}
