#include <stdio.h>

int main() {
	int old;
	printf("나이를 입력하세요 : ");
	scanf("%d", &old);
	int price = 3000;
	int total = 365*3 * price * old;
	printf("지금까지 밥 값은 %d 원 입니다.\n", total);
	return 0;
}