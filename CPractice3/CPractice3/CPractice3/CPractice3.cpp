// CPractice3.cpp : Defines the entry point for the console application.
//To understand the usage of break statement
//programme to find whether a number is prime or not

#include "stdafx.h"
#include<iostream>

using namespace std;
int main()
{
	unsigned short int i,num, res;
	cout << " Enter number";
	cin >> num;
	for (i = 2; i < num; i++)
	{
		res = num % i;
		if (res == 0)
		{
			cout << " The number entered is not a prime";
			break;
		}
	}
		if (i == num)
			cout << "The number is a prime";
	
		getchar();
		getchar();
    return 0;
}

