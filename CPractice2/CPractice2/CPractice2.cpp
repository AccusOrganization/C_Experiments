// CPractice2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
int main()

{
	unsigned short int qnty;
	float rate, total, toPay;
	cout << "Enter quanity : \n";
	cin >> qnty;
	cout << "Rate per piece : \n";
	cin >> rate;
	total = qnty * rate;
	if (total > 1000)
	{
		toPay = (total - (total* (10.0 / 100.0)));
		cout << "Amount to be paid : " << toPay;
	}
	else
	{
		cout << "Amount to be paid : " << total;
	}
	getchar();
	getchar();
    return 0;
}

