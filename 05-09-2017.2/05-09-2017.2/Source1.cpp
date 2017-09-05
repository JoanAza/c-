#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main() {

	int *numero;
	numero = new int;

	cout << "INGRESE UNA LETRA: ";
	cin >> *numero;

	if ((*numero > 64 && *numero <91) ||(*numero >96 && *numero <122) )
	{
		cout << "ES UNA LETRA ";
	}
	else
	{
		cout << "NO ES UNA LETRA ";
	}

	getch();
	return 0;
}