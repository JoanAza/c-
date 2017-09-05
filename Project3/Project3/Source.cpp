#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main()
{
	long long *dato;
	int *H,*M,*S;
	H = new int;
	M = new int;
	S = new int;

	dato = new long long;
	do {
		cout << "Ingrese el codigo : ";
		cin >> *dato;
	} while (*dato > 235960 && *dato > 0);

	*H = *dato % 100;
	*M = (*dato / 100) % 100;
	*S = ((*dato / 100) / 100) % 100;

	cout <<"\n" << *S;
	cout <<"\n" << *M;
	cout <<"\n" << *H;

	if (*H > 0 && *H <= 12)
	{
		cout << " \n ES DE DÍA AÚN";
	}
	if (*H > 12 && *H <= 19)
	{
		cout << " \n ES TARDE AÚN";
	}
	else
	{
		cout << " \n ES DE NOCHE";
	}
	


	getch();
	delete H, S, M, dato;
	return 0;
}