#include <stdio.h>

int main() {
	double radius;
	double pi = 3.141592f;
	printf("���� ������ �Է�: ");
	scanf("%lf", &radius);
	double perimeter = 2 * pi * radius;
	double area = pi * radius * radius;
	printf("���� �ѷ�: %.2f\n", perimeter);
	printf("���� ����: %.2f\n", area);

	return 0;
}