// CPractice10.cpp : Defines the entry point for the console application.
//Arrays

#include "stdafx.h"
#include <iostream>

using namespace std;

int address(int *p);
int main()

{
	int num[5] = { 20,29,30,32,35 };
	int i;
	for (i = 0; i < 5; i++)
	{
		address(&num[i]);
	}
	getchar();
	getchar();
	
    return 0;
}

int address(int *p)
{
	
	
		cout << "The number is :" << *p << " and stored in memory location " << p<<"\n";
	
	return (0);
}