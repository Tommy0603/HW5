#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int binarySearch(int key, int* a, int right, int left);

int main(void)
{
	int a[SIZE] ;
	int right = SIZE;
	int left = 1;
	int x;
	int key;
	int element;
	for (x = 0; x < SIZE; x++)
		{
			a[x] = 2 * x;
		}
	printf("Enter integer search key:\n");
	scanf_s("%d", &key);

	element = binarySearch(key, a, right, left);
	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}

int binarySearch(int key, int* a, int right, int left)
{

	int mid = (left + right) / 2;

	if (left > right)
	{
		return -1;
	}
	else if (key == a[mid])
	{
		return mid;
	}
	else if (key < a[mid])
	{
		right = mid - 1;
		mid = (left + right) / 2;
		return binarySearch(key, a, right, left);
	}
	else if(key > a[mid])
	{
		left = mid + 1;
		mid = (left + right) / 2;
		return binarySearch(key, a, right, left);
	}
}