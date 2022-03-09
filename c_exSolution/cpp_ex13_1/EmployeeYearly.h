#pragma once
#include "Employee.h"

class EmployeeYearly : public Employee
{
private:
	const int unitYearSalary = 20000000;
	const int insentivePosition = 10000000;
	const int insentiveGrade = 5000000;

	int grade;
public:
	EmployeeYearly(string name, int position, int grade);
	virtual int GetSalary() override;

};

