#include<stdio.h>

struct DATA
{
	int i;
	char c;
};

void funx(struct DATA);

void funx(struct DATA data)
{
	data.i = 2;
	data.c = 'C';
}

int main(void)
{
	struct DATA actualData = { 1 , 'B' };

	funx(actualData);

	printf("%d and %c\n", actualData.i, actualData.c);
	
	return 0;
}