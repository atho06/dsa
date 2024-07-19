#include <stdio.h>
#include <stdlib.h>

void sort(char *word, int size)
{
    char temp;
    for (int i = 0; i < size; i++)
    {
        for (int j=0; j<size-1-i; j++)
        {
            if (*(word+j) > *(word+j+1))
            {
                temp=*(word+j);
                *(word+j) = *(word+j+1);
                *(word+j+1) = temp;
            }

        }

    }
}

void take_word(char word[], int *size)
{
   char letter;
   printf("Enter word:");
   while ((*size)<100)
   {
       scanf("%c", &letter);
       if (letter=='\n' || letter==' ')
        {
            break;
        }
       word[*size]=letter;
       (*size)++;
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
    char word1[100], word2[100];
    int size1=0, size2=0;
    take_word(word1, &size1);
    sort(word1, size1);
    take_word(word2, &size2);
    if (size1==size2)
    {
        sort(word2, size2);
    }
    else
    {
        printf("Not anagrams");
        return 0;
    }
    int anagram=is_anagram(word1, word2, size1, size2);
    if (anagram==1)
        printf("The words are anagram!!!");
    else
        printf("The words are not anagram");
    return 0;
}

