#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x, centenas, decenas, unidades;
	cout << "Ingrese x:" << endl;
	cin >> x;
	centenas = x / 100;
	decenas = (x%100)/10;
	unidades = (x % 10);
	cout << "La suma es:" << centenas + unidades + decenas << endl;
	_getch();
}