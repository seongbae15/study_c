#include "Employee.h"
#include "EmployeeHourly.h"
#include "EmployeeMonthly.h"
#include "EmployeeYearly.h"
#include <iostream>

#define NUMBER_EMPLOYEE 10

int main() {
	Employee* employee[NUMBER_EMPLOYEE] = {
		new EmployeeHourly("a",0,200),
		new EmployeeHourly("b",0,220),
		new EmployeeMonthly("c",1,3),
		new EmployeeMonthly("d",1,5),
		new EmployeeYearly("e",2,3),
		new EmployeeMonthly("f",2,15),
		new EmployeeMonthly("g",3,20),
		new EmployeeYearly("h",3,3),
		new EmployeeHourly("i",4,50),
		new EmployeeYearly("j",4,4),
	};
	
	cout << "이름 \t 직급 \t 종류 \t 급여" << endl;
	for (int i = 0; i < NUMBER_EMPLOYEE; i++) {
		cout << employee[i]->GetName()<<"\t";
		cout << employee[i]->GetPosition() << "\t";
		cout << employee[i]->GetSalaryType() << "\t";
		cout << employee[i]->GetSalary() << endl;
	}

	for (int i = 0; i < NUMBER_EMPLOYEE; i++) {
		delete employee[i];
	}

	return 0;
}