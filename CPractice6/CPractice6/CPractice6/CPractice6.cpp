// CPractice6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	float sum = 0;
	float avg = 0;
	int mark[10];
	unsigned short int i;
	cout << "Enter the marks\n";
	for (i = 0; i < 10; i++)
	{
		//cout << "Enter the marks\n";
		cin >> mark[i];
	}

	cout << "Marks entered are,";
	for (i = 0; i < 10; i++)
	{
		//cout << "Enter the marks\n";
		cout << mark[i] << " ";
	}
	
	for (i = 0; i < 10; i++)
		sum = sum + mark[i];
	avg = sum / 10;
	cout << "Average mark of the students of this class is " << avg;

	while (1);
    return 0;
}
