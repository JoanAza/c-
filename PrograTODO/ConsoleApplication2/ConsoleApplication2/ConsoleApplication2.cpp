// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"
#include "conio.h"
#include "iostream"

using namespace System;
using namespace std;

int main()
{
	float D, X, Y, Z;

	cout << "ingrese X:"; cin >> X;
	cout << "ingrese Y:"; cin >> Y;
	cout << "ingrese Z:"; cin >> Z;

	D =  X + Y + Z * 5;

	cout << "el resultado es:" << D << endl;
    
	_getch();
	return 0;
	

}
