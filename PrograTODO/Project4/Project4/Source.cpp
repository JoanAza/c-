#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
using namespace System;

int main()
{
	int *numhoras;
	float *total;
	numhoras = new int;
	total = new float;

	cout << "Ingrese numero de horas : ";
	cin >> *numhoras;
	*total =
		(*numhoras <= 40)*(*numhoras * 16) +
		(*numhoras > 40)*(40 * 16 + (*numhoras - 40) * 20);
	cout << "El monto a pagar es : " << *total;
	delete total, numhoras;
	getch();
}