// CPractice8.cpp : Defines the entry point for the console application.
//passing entire array to a function

#include "stdafx.h"
#include<iostream>

using namespace std;

int display(int *j, int n);
int main()

{
	int arr[] = { 12,15,18,21,24,27};
	cout << "Array elements are :\n";
	display(&arr[0], 6);
	getchar();
    return 0;
}
int display(int *j, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<*j<<"\n";
		j++;
	}
	return (0);
}
