// CPractice5.cpp : Defines the entry point for the console application.
//learning functions

#include "stdafx.h"
#include<iostream>

using namespace std;
int sum(int a, int b);
int mul(int x, int y);



int main()
{
	unsigned short int a, b, sum1, mult;
	cout << "Enter any two integers\n";
	cin >> a >> b;
	sum1 = sum(a, b);
	cout << "Sum is " << sum1<<endl;
	mult = mul(a, b);
	cout << "Numbers when multiplied " << mult;
	getchar();
	getchar();
	//getchar();



    return 0;
}

int sum(int a, int b)

{
	int sum = a + b;
	return (sum);
}

int mul(int x, int y)
{
	int mul = x * y;
	return (mul);
}