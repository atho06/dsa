#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
	char string[SIZE];
	char encrypted[SIZE];
	int shifter;
	printf("%d %d\n",'a', 'z');
	printf("%d %d\n", 'A', 'Z');
	printf("Enter a string:");
	scanf("%s", string);
	printf("Enter shifter value:");
	scanf("%d", &shifter);
	for(int i=0; i<strlen(string);i++)
	{
		if(string[i]>='a' && string[i]<='z')
			encrypted[i] = (((string[i] - 'a') + shifter) % 26) + 'a';
		if(string[i]>='A' && string[i]<='Z')
			encrypted[i] = (((string[i] - 'A') + shifter) % 26) + 'A';
	}
	printf("Entered: %s\n", string);
	printf("Encripted: %s\n", encrypted);
//	for(int i=0; i<strlen(string);i++)
//		printf("Encripted: %d\n", encrypted[i]);
//	printf("\n");
	return 0;
}
