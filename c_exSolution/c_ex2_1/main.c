#include <stdio.h>

int main()
{
	int height;
	printf("키(cm)를 입력하세요 : ");
	scanf("%d", &height);
	printf("키: %d m %d cm 입니다.", height / 100, height % 100);
	return 0;
}