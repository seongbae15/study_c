#include "EmployeeHourly.h"

EmployeeHourly::EmployeeHourly(string name, int position, int workingHours)
	: Employee(name, position, 0) {
	this->workingHours = workingHours;
}

int EmployeeHourly::GetSalary() {
	int salary = workingHours * unitHourSalary;
	for (int i = 0; i < position; i++) {
		salary *= 2;
	}
	return salary;

}