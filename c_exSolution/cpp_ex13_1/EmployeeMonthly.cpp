#include "EmployeeMonthly.h"

EmployeeMonthly::EmployeeMonthly(string name, int position, int serviceYears)
	:Employee(name, position, 1) {
	this->serviceYears = serviceYears;
}

int EmployeeMonthly::GetSalary() {
	int salary = unitMonthlySalary;
	salary += insentivePosition * position;
	salary += insentiveServieYears * serviceYears;
	return salary;
}