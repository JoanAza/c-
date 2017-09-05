// ConsoleApplication4.cpp : main project file.

#include "stdafx.h"
#include "conio.h"
#include "iostream"
using namespace System;
using namespace std;
//PROGRAMA PRINCIPAL
int main()
{
	int A, B, C; //Lados del triangulo
	int escaleno, equilatero, isosceles;
	int estriangulo;
	//Ingreso de datos
	cout << "Ingrese el lado A:"; cin >> A;
	cout << "Ingrese el lado B:"; cin >> B;
	cout << "Ingrese el lado C:"; cin >> C;
	//Expresiones logicas
	estriangulo = (A + B > C) && (B + C > A) && (A + C > B);
	//escaleno = (A != B) && (B != C) && (A != C) && estriangulo==1;
	escaleno = (A != B) && (B != C) && (A != C) && estriangulo;
	equilatero = (A == B) && (B == C) && (A == C) && estriangulo;
	isosceles = ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) && estriangulo;
	//Salida de datos
	cout << "\n RESULTADOS";
	cout << "\n Es triangulo escaleno ? " << (char)(escaleno*86+!escaleno*70);
	cout << "\n Es triangulo equilatero ? " << (char)(equilatero*86+!equilatero*70);
	cout << "\n Es triangulo isosceles ? " << (char)(isosceles*86+!isosceles*70);

	_getch();
    return 0;

}
