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
		string positionArray[] = { "사원","대리","과장","차장","부장" };
		return positionArray[position];
	}
	inline string GetSalaryType() {
		string salaryTypeArray[] = { "시급제","월급제","연봉제" };
		return salaryTypeArray[salaryType];
	}

};

