#include <stdio.h>
#include <malloc.h>
#define MAX_NAME 20
#define SUBJECT 3

typedef struct
{
	char name[MAX_NAME];
	int score[SUBJECT];
	int total;
	double average;
} Grade;

int main()
{
	//�л� �� �Է�.
	int numberStudents;
	printf("�л� ���� �Է��ϼ���: ");
	scanf("%d", &numberStudents);

	//���� �Է�.
	Grade* grades = (Grade*)malloc(sizeof(Grade) * numberStudents);
	char* subject[SUBJECT] = { "korean","english","mathmatics" };

	for (int i = 0; i < numberStudents; i++)
	{
		printf("%d�� ° �л�\n", i + 1);
		printf("�̸�: ");
		scanf("%s", grades[i].name);
		grades[i].total = 0;
		for (int j = 0; j < SUBJECT; j++)
		{
			printf("%s: ", subject[j]);
			scanf("%d", &grades[i].score[j]);
			//���� ���.
			grades[i].total += grades[i].score[j];
		}
		//��� ���
		grades[i].average = (double)grades[i].total / SUBJECT;
	}

	//���� ���.
	printf("------------------------------------------------------------\n");
	printf("�̸�\t%s\t%s\t%s\t����\t���\n",subject[0],subject[1],subject[2]);
	printf("------------------------------------------------------------\n");
	for (int i = 0; i < numberStudents; i++)
	{
		printf("%s\t", grades[i].name);
		for (int j = 0; j < SUBJECT; j++)
		{
			printf("%d\t", grades[i].score[j]);
		}
		printf("%d\t", grades[i].total);
		printf("%.2f\t", grades[i].average);
		printf("\n");
	}
	free(grades);
	return 0;
}