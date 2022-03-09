#include "EmployeeYearly.h"

EmployeeYearly::EmployeeYearly(string name, int position, int grade)
	:Employee(name, position, 2) {
	this->grade = grade;
}


int EmployeeYearly::GetSalary() {
	int salary = unitYearSalary;
	salary += insentivePosition * position;
	salary += insentiveGrade * grade;
	return salary/12;

}