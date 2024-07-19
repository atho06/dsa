#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

/*void deque(int array[SIZE])//delete at the start
{

}
*/


void enque(int array[SIZE], int value)//insert at the rare
{
    array[SIZE]+=value;
    return 0;
}
int main()
{
    int array[SIZE]={};
    enque(array[SIZE], 23);
    for(int i=0; i<SIZE; i++)
    {
        printf("%d", array[SIZE] );
    }
    return 0;
}
