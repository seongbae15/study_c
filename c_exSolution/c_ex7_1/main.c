#include <stdio.h>
#include <Windows.h>

#define EXIT 4
#define MAX_UNIT 2
int InputSys();
void DispMainMenu();
void RunConversion(int input);
int InputUnitConversionDetailMenu(char* unit[]);
void ConvertUnit(char* unit[], int input, double coefConversion);
void RunEachUnitConversion(char* unit[], double coefConversion);


typedef struct
{
	char* length[2];
	char* weight[2];
	char* volume[2];
	char* area[2];

} UnitForConversion;

int main()
{
	int input = 0;
	while (EXIT != input)
	{
		system("cls");
		DispMainMenu();
		input = InputSys();
		RunConversion(input);
		
	}

	return 0;
}

int InputSys()
{
	int input;
	printf("�Է�: ");
	scanf("%d", &input);
	return input;
}

void DispMainMenu()
{
	printf("0. ���� ��ȯ\n");
	printf("1. ���� ��ȯ\n");
	printf("2. ���� ��ȯ\n");
	printf("3. ���� ��ȯ\n");
	printf("4. ����\n");
}

void RunConversion(int input)
{
	const UnitForConversion unitForConversion = {
		{"����","ų�ι���"},
		{"�Ŀ��","ų�α׷�"},
		{"����","����"},
		{"����Ŀ","��Ÿ��"} };

	const double coefConversion[] = { 1.6093,0.45359,3.7854,0.40468 };

	while (1)
	{
		switch (input)
		{
		case 0:
			RunEachUnitConversion(unitForConversion.length, coefConversion[input]);
			return;
		case 1:
			RunEachUnitConversion(unitForConversion.weight, coefConversion[input]);
			return;
		case 2:
			RunEachUnitConversion(unitForConversion.volume, coefConversion[input]);
			return;
		case 3:
			RunEachUnitConversion(unitForConversion.area, coefConversion[input]);
			return;
		case 4:
		default:
			return;
		}
	}
}

void RunEachUnitConversion(char* unit[], double coefConversion)
{
	while (1)
	{
		int input = InputUnitConversionDetailMenu(unit);
		switch (input)
		{
		case 0:
			ConvertUnit(unit, input, coefConversion);
			return;
		case 1:
			ConvertUnit(unit, input, (double)1/coefConversion);
			return;
		default:
			printf("�߸��� ��ȣ�� �Է��߽��ϴ�.\n");
			getch();
			break;
		}
	}
}

int InputUnitConversionDetailMenu(char* unit[])
{
	system("cls");
	printf("0. %s --> %s\n", unit[0], unit[1]);
	printf("1. %s --> %s\n", unit[1], unit[0]);
	return InputSys();
}

void ConvertUnit(char* unit[], int input, double coefConversion)
{
	double inputValue;
	printf("%s : ", unit[input]);
	scanf("%lf", &inputValue);
	printf("->%s : %.2f\n", unit[(input+1)%2], inputValue*coefConversion);
	getch();
}