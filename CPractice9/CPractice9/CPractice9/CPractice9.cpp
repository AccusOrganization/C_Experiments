// CPractice9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace  std;
int main()
{
	float arr[4][2];
	cout << "Enter roll no: and marks\n";


	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "Roll number and mark of " << i << "student";
		cout << arr[i][0] << arr[i][1];
	}
	getchar();
	getchar();

    return 0;
}

