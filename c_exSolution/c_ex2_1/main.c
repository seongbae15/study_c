#include <stdio.h>

int main()
{
	int height;
	printf("Ű(cm)�� �Է��ϼ��� : ");
	scanf("%d", &height);
	printf("Ű: %d m %d cm �Դϴ�.", height / 100, height % 100);
	return 0;
}