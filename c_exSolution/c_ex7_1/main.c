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
	printf("입력: ");
	scanf("%d", &input);
	return input;
}

void DispMainMenu()
{
	printf("0. 길이 변환\n");
	printf("1. 무게 변환\n");
	printf("2. 부피 변환\n");
	printf("3. 넓이 변환\n");
	printf("4. 종료\n");
}

void RunConversion(int input)
{
	const UnitForConversion unitForConversion = {
		{"마일","킬로미터"},
		{"파운드","킬로그램"},
		{"갤론","리터"},
		{"에이커","헥타르"} };

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
			printf("잘못된 번호를 입력했습니다.\n");
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