#include <stdio.h>

int main()
{
    char c;
    printf("Enter character:\n");
    scanf("%c", &c);
    switch(c)
    {
    case'V':
    case'v':printf("Violet");break;
    case'I':
    case'i':printf("Indigo");break;
    case'B':
    case'b':printf("Blue");break;
    case'G':
    case'g':printf("Green");break;
    case'Y':
    case'y':printf("Yellow");break;
    case'O':
    case'o':printf("Orange");break;
    case'R':
    case'r':printf("Red");break;
    default:printf("NOT FOUND IN RAINBOW!!!");
    }
    return 0;
}
