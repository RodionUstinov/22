#include <stdio.h>
int bitt(int num, int bit);
int main(void)
{
	int num, bit;
	printf("Please enter a integer: ");
	scanf_s("%d", &num);
	printf("Please enter the bit you want to check: ");
	scanf_s("%d", &bit);
	printf("%d\r\n", bitt(num, bit));
	return 0;
}
int bitt(int num, int bit)
{
	int mask = 1;
	mask <<= bit;
	return(num & mask);
}
