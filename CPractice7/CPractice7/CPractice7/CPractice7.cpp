// CPractice7.cpp : Defines the entry point for the console application.
//Arrays to functions
//Pass by value

#include "stdafx.h"
#include<iostream>

using namespace std;

int display(int m);

int main()
{
	int marks[] = { 25,42,34,50,48,41};
	cout << "Marks scored by each student \n ";

	for (int i = 0; i <= 5; i++)
	{
		 display(marks[i]);
	}

	getchar();
	getchar();
    return 0;
}

 int display(int m)
{
	cout<<m<<"\n";
	return (0);
	
   }

