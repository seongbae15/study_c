#include <stdio.h>
#include <malloc.h>

int main() {
	//Eratosthenes의 체(소수 찾기)

	int range;
	printf("자연수를 입력하세요.");
	scanf("%d", &range);

	int* isPrime;
	isPrime = (int*)malloc(sizeof(int) * range);
	int count=0;
	for (int i = 2; i < range; i++)
		isPrime[i] = 1;
	for (int i = 2; i < range; i++)
	{
		for (int j = 2, mul = i*j; mul < range; mul = ++j*i)
		{
			isPrime[mul] = 0;
			count++;
		}
	}
	printf("for %d", count);
	count = 0;
	for (int i = 2; i < range; i++)
	{
		if(isPrime[i])
			printf("%d\t", i);
	}
	printf("\n");
	free(isPrime);


	for (int i = 2; i <= range; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (0 == i % j)
			{
				if (i != j)
					break;
				else
					printf("%d\t", j);
				count++;
			}
		}
	}
	printf("\n");
	printf("for %d", count);
	return 0;
}