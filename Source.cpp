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
	
		//do{
		cout << "Ingresar nota: "
		cin >>*nota_num;
	//}while(*nota_num<=0 && *nota_num>=21)

	if(19<=*nota_num && 20>=*nota_num)
	{
		letra = A;
		cout << "la letra para esta nota es: " << letra;
	}

	cout<<"\n pulse una teclea para salir ..."
	getch();
	delete nota_num,letra;
}