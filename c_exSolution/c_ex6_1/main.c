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
	//학생 수 입력.
	int numberStudents;
	printf("학생 수를 입력하세요: ");
	scanf("%d", &numberStudents);

	//성적 입력.
	Grade* grades = (Grade*)malloc(sizeof(Grade) * numberStudents);
	char* subject[SUBJECT] = { "korean","english","mathmatics" };

	for (int i = 0; i < numberStudents; i++)
	{
		printf("%d번 째 학생\n", i + 1);
		printf("이름: ");
		scanf("%s", grades[i].name);
		grades[i].total = 0;
		for (int j = 0; j < SUBJECT; j++)
		{
			printf("%s: ", subject[j]);
			scanf("%d", &grades[i].score[j]);
			//총점 계산.
			grades[i].total += grades[i].score[j];
		}
		//평균 계산
		grades[i].average = (double)grades[i].total / SUBJECT;
	}

	//성적 출력.
	printf("------------------------------------------------------------\n");
	printf("이름\t%s\t%s\t%s\t총점\t평균\n",subject[0],subject[1],subject[2]);
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