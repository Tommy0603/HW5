#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int RecursiveMaximum(int *number,int max);

int main(void)
{
	int a[SIZE];
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand();
		printf("%d  ",a[i]);
	}
	printf("\n");
	printf("³Ì¤j­È¬°¡G%d\n",RecursiveMaximum(a,SIZE-1));
	system("pause");
	return 0;
}
int RecursiveMaximum(int* number, int max)
{
	int* b = number;
	int i,temp;
	if (max ==0)
	{
		return b[max];
	}
	else if (b[max] > b[max - 1])
	{
		temp = b[max];
		b[max] = b[max - 1];
		b[max - 1] = temp;
		return RecursiveMaximum(number, max - 1);
	}
	else
	{
		return RecursiveMaximum(number, max - 1);
	}
}