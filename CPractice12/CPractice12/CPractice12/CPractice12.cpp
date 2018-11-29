// CPractice12.cpp : Defines the entry point for the console application.
//structure and Enum

#include "stdafx.h"
#include<iostream>

using namespace std;

enum emp_department
{
	assembly, manufacturing, accounts, stores
};
typedef struct
{
	char name[15];
	unsigned short int age;
	enum emp_department department;
	double basicpay;
}employee;


int main()
{
	employee e;
	strcpy_s(e.name, "Accu Alex");
	e.age = 29;
	e.department = manufacturing;
	e.basicpay = 24789.56;

	cout << "Employee Details \n\nName : " << e.name << "\n";
	cout << "Age :" << e.age << "\n";
	cout << "Department :" << e.department << "\n";
	cout << "Basic Pay :" << e.basicpay << "\n\n";

	cout << "Department 1 - Assembly \nDepartment 2 - Manufacturing \nDepartment 3 - Accounts \nDepartment 4- Stores \n\n";

	if (e.department == accounts)
	{
		cout << "Accu Alex is an accountant";
	}
	else
		cout << "Accu Alex is not an accountant";


	getchar();
	getchar();

    return 0;
}

