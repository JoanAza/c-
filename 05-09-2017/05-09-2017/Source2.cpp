#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main() {

	int *numero;
	numero = new int;
	cout << "Ingrese un numero : ";
	cin >> *numero;
	if (*numero % 2 == 0)
	{
		cout << "EL NUMERO INGRESADO ES PAR";
	}
	else
	{
		cout << "EL NUMERO INGRESADO ES IMPAR";
	}


	_getch();
	return 0;
}