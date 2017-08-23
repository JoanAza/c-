#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main()
{
	int *nota_num;
	char *letra;
	letra = new char;
	nota_num = new int;

	cout << "Ingresar nota numerica: ";
	cin >> *nota_num;
	*letra=


		(19 <= *nota_num && *nota_num <= 20) * 65 +
		(16 <= *nota_num && *nota_num <= 18) * 66 +
		(13 <= *nota_num && *nota_num <= 15) * 67 +
		(10 <= *nota_num && *nota_num <= 12) * 68 +
		(1 <= *nota_num && *nota_num <= 9) * 69;

	cout << "El resultado es: " << (char)*letra;
	cout << "\n pulse una teclea para salir ...";
		
	getch();
	delete nota_num, letra;
}