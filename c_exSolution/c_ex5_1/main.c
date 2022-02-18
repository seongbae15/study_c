#include <stdio.h>
#include <malloc.h>


int main()
{
	int row, col;
	printf("��� ���� ������ ���� �Է��ϼ��� : ");
	scanf("%d %d", &row, &col);
	
	int** pNumber;
	pNumber = (int**)malloc(sizeof(int*) * row);
	
	for (int i = 0; i < row; i++)
	{
		pNumber[i] = (int*)malloc(sizeof(int) * col);
		printf("%d�� ° ���� ���� %d ���� �Է��ϼ��� : ",i + 1, col);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &pNumber[i][j]);
		}
	}
	printf("\n\n");
	
	int* pColSum = (int*)malloc(sizeof(int) * col);
	for (int i = 0; i < col; i++)
		pColSum[i] = 0;

	for (int i = 0; i < row; i++)
	{
		int rowSum = 0;
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", pNumber[i][j]);
			rowSum += pNumber[i][j];
			pColSum[j] += pNumber[i][j];
		}
		printf("| %d\n", rowSum);
	}
	printf("-----------------------------------------------------------------\n");
	for (int i = 0; i < col; i++)
	{
		printf("%d\t", pColSum[i]);
	}

	for (int i = 0; i < row; i++)
		free(pNumber[i]);
	free(pColSum);
	free(pNumber);
	return 0;
}