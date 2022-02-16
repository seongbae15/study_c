#include <stdio.h>

int main() {
	double cost = 24;
	double rate = 1.08;

	for (int i = 1627; i <= 2010; i++)
	{
		cost *= rate;
	}
	printf("2010년 현재 금액은 : %.2f입니다.", cost);
	return 0;
}