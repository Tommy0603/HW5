#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void throwDice(int wDeck[11]);
int main(void)
{
	int deck[11] = { 0 };
	srand(time(0));

	throwDice(deck);
	printf("\n");
	system("pause");
	return 0;
}
void throwDice(int wDeck[11])
{
	int a, b, c,d,total;
	for (a = 0; a < 36000; a++)
	{
		b = rand() % 6 + 1;
		c = rand() % 6 + 1;
		total = b + c;
		wDeck[total-2] += 1;
		printf("%d,%d   %c",b,c,
			a % 8== 0 ? '\n' : '\t');
	}
	printf("\n\n");
	for (d = 2; d <= 12; d++)
	{
		printf("骰到%d的次數為%d\n",d,wDeck[d-2]);
	}
	
	
}