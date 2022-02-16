#include <stdio.h>

int main() {
	int height;
	int weight;
	printf("키를 입력하세요(cm) : ");
	scanf("%d", &height);
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &weight);

	double dHeihgt = (double)height/100.0;
	double bmi = weight / (dHeihgt * dHeihgt);
	printf("BMI : %.2f\n", bmi);
	if (bmi >= 30.0)
		printf("고도비만 입니다.\n");
	else if (bmi >= 25.0)
		printf("비만 입니다.\n");
	else if(bmi >= 23.0)
		printf("과체중 입니다.\n");
	else if(bmi >= 18.5)
		printf("표준체중 입니다.\n");
	else
		printf("체중미달 입니다.\n");

	return 0;
}