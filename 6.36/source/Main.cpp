#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringReverse(char* array,int i);

int main()
{
	char string[100];
	printf("請輸入一個字串：");
	scanf_s("%s",&string,sizeof(string));

	printf("string1 is：%s\n",string);
	printf("string2 is：");
	size_t length = strlen(string);
	stringReverse(string, length-1);

	printf("\n");

	system("pause");
	return 0;
}
void stringReverse(char* array,int i ) 
{
	int k;
	char *string2=array;
	char temp = 'A';
	if (i==0)
	{
		printf("%s",string2);
	}
	else
	{
		for (k = 0; k <=i; k++)
		{
			temp = string2[i];
			string2[i] = string2[i-k];
			string2[i-k] = temp;
			//printf("%s ", string2);
			//i--;
		}
	stringReverse(array,i-1);
	}
}