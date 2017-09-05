#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main(){

	int *numero;
	numero = new int;
	cout << "Ingrese un numero : ";
	cin >> *numero;
	if (*numero > 0)
	{
		cout << "EL NUMERO ES POSITIVO";
	}
	else
	{
		cout << "EL NUMERO ES NEGATIVO";
	}
	
	_getch();
	return 0;
}