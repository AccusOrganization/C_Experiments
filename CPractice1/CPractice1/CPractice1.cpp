// CPractice1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	float mySal, hra, da, grossSal;
	cout << "Enter your salary \n ";
	cin >> mySal;
	//mySal = 1000;
	hra = (mySal * (20.0 / 100.0));
	da = (mySal * (40.0 / 100.0));
	grossSal = (mySal + hra + da);
	cout << "My gross salary is : "<< grossSal<<endl;
	getchar();
	getchar();


    return 0;
}

