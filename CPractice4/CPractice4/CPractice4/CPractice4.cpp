// CPractice4.cpp : Defines the entry point for the console application.
//Simple calculator programme using switch case

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
    unsigned short int i, a, b;
    float res;
    cout << "MY CALCULATOR\n\n";
    cout << "Choose your option \n\n" <<"Enter 1 for  Addition\n" << "Enter 2 for Substraction\n";
    cout << "Enter 3 for Multiplication\n" << "Enter 4 for Division\n";
    cin >> i;
    switch (i)
    {
        case 1:
            cout << "Enter the numbers to be added\n";
            cin >> a;
            cin >> b;
            res = a + b;
            cout << "Sum is " << res;
            break;
        case 2:
            cout << "Enter the numbers to be substracted\n";
            cin >> a;
            cin >> b;
            res = a - b;
            cout << "Result is " << res;
            break;
        case 3:
            cout << "Enter the numbers to be multiplied\n";
            cin >> a;
            cin >> b;
            res = a * b;
            cout << "Result is " << res;
            break;
        case 4:
            cout << "Enter the numbers to be divided\n";
            cin >> a;
            cin >> b;
            res = a / b;
            cout << "Result is " << res;
            break;

        default:
            cout << "You have given an invalid entry";
            break;
    }
    getchar();
    getchar();
        return 0;
}

