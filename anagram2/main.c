#include <stdio.h>
#include <stdlib.h>

void sort(char word[], int size)
{
    char wd;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (word[j] > word[j + 1])
            {
                wd = word[j];
                word[j] = word[j + 1];
                word[j + 1] = wd;
            }
        }
    }
}

int is_anagram(char word1[], char word2[], int size1, int size2)
{
    for (int i=0; i<size1; i++)
    {
        if (word1[i]==word2[i])
            continue;
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int size1=0, size2=0;
    char word1[100], word2[100];
    char letter;
    printf("Enter word1:");
    while (size1<100)
    {
        scanf("%c", &letter);
        if (letter=='\n')
        {
            break;
        }
        word1[size1]=letter;
        size1++;
    }
    sort(word1, size1);
    printf("Enter word2:");
    while (size2<100)
    {
        scanf("%c", &letter);
        if (letter=='\n')
        {
            break;
        }
        word2[size2]=letter;
        size2++;
    }
    sort(word2, size2);
    int anagram=is_anagram(word1, word2, size1, size2);
    if (anagram==1)
        printf("The words are anagram!!!");
    else
        printf("The words are not anagram");
    return 0;
}

