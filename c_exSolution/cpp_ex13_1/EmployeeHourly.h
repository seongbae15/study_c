#pragma once
#include "Employee.h"
class EmployeeHourly:public Employee
{
private:
	const int unitHourSalary = 10000;
	int workingHours;
public:
	EmployeeHourly(string name, int position, int workingHours);
	virtual int GetSalary() override;

};

