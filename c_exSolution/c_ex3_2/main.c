#include <stdio.h>

int main() {
	int height;
	int weight;
	printf("Ű�� �Է��ϼ���(cm) : ");
	scanf("%d", &height);
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &weight);

	double dHeihgt = (double)height/100.0;
	double bmi = weight / (dHeihgt * dHeihgt);
	printf("BMI : %.2f\n", bmi);
	if (bmi >= 30.0)
		printf("���� �Դϴ�.\n");
	else if (bmi >= 25.0)
		printf("�� �Դϴ�.\n");
	else if(bmi >= 23.0)
		printf("��ü�� �Դϴ�.\n");
	else if(bmi >= 18.5)
		printf("ǥ��ü�� �Դϴ�.\n");
	else
		printf("ü�߹̴� �Դϴ�.\n");

	return 0;
}