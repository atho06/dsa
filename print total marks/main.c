#include <stdio.h>
#include <stdlib.h>

struct STUDENT
{
    unsigned int roll_no;
    char name[50];
    int marks[5];
};

void calculate_total(struct STUDENT s)
{
    int total=0;
    for (int i=0; i<5; i++)
    {
        total+=s.marks[i];
    }
    printf("Total marks obtained by %s: %d", s.name, total);
}


int main()
{
    struct STUDENT s1={1, "Amit", {29,30,21}};
    calculate_total(s1);
    return 0;
}
