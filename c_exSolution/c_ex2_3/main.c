#include <stdio.h>

int main() {
	int old;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &old);
	int price = 3000;
	int total = 365*3 * price * old;
	printf("���ݱ��� �� ���� %d �� �Դϴ�.\n", total);
	return 0;
}