#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main() {

	int *numero;
	numero = new int;

	cout << "INGRESE UN NUMERO: ";
	cin >> *numero;

	if (*numero % 2 == 0)
	{
		cout << "EL NUMERO QUE INGRESÓ ES PAR ";
	}
	else
	{
		cout << "EL NUMERO QUE INGRESÓ ES IMPAR ";
	}

	getch();
	return 0;
}