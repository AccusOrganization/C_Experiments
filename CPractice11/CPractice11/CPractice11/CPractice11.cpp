// CPractice11.cpp : Defines the entry point for the console application.
//passing structure to function by call by reference

#include "stdafx.h"
#include<iostream>
#include"Common.h"

using namespace std;

int displayFamilyData(MyFamily *family);


int main()
{
	
	MyFamily b[3];
	int i;
	cout << " Enter your family member details :\n Name\t Profession \t Age \n";
	for (i = 0; i < 3; i++)
	{
		cout << "Enter details of member " << i+1<<"\n";
		cin >> b[i].Name >> b[i].Profession >> b[i].Age;
		
	}
	
	cout << "\n Please find below the details of my family members :\n";
	displayFamilyData(b);

	
	while (1);
	
    return 0;
}


int displayFamilyData(MyFamily *family)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << " Details of member " << i + 1<<endl;
		cout << "Name : " << family[i].Name << endl;
		cout << "Profession : " << family[i].Profession << endl;
		cout << "Age : " << family[i].Age << endl;
}
	return (0);
}
