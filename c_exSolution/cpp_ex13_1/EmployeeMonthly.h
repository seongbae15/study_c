#pragma once
#include "Employee.h"

class EmployeeMonthly : public Employee
{
private:
	int unitMonthlySalary = 2000000;
	int insentivePosition = 200000;
	int insentiveServieYears = 50000;
	int serviceYears;
public:
	EmployeeMonthly(string name, int position, int serviceYears);
	virtual int GetSalary() override;

};

