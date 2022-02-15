#include <stdio.h>

int main() {
	double radius;
	double pi = 3.141592f;
	printf("원의 반지름 입력: ");
	scanf("%lf", &radius);
	double perimeter = 2 * pi * radius;
	double area = pi * radius * radius;
	printf("원의 둘레: %.2f\n", perimeter);
	printf("원의 넓이: %.2f\n", area);

	return 0;
}