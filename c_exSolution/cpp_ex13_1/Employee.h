#pragma once
#include <string>

using namespace std;

class Employee
{
protected:
	string name;
	int position;
	int salaryType;

public:
	Employee(string name, int position, int salaryType);
	virtual ~Employee();
	virtual int GetSalary() = 0;


	inline string GetName() {
		return name;
	}
	inline string GetPosition() {
		string positionArray[] = { "���","�븮","����","����","����" };
		return positionArray[position];
	}
	inline string GetSalaryType() {
		string salaryTypeArray[] = { "�ñ���","������","������" };
		return salaryTypeArray[salaryType];
	}

};

