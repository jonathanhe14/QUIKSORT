#include "Funciones.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


Funciones::Funciones()
{
}
Funciones::~Funciones()
{
}
void Funciones::quicksort(vector<string> &a, int primero, int ultimo,int tipo)
{
	int i, j, central;
	string pivote;
	central = (primero + ultimo) / 2;
	pivote = a[central];
	i = primero;
	j = ultimo;

	do {

		switch (tipo)
		{
		case 1: // Orden ascendente como números
			while (stoi(a[i]) < stoi(pivote)) i++;
			while (stoi(a[j]) > stoi(pivote)) j--;
			break;
		case 2: // Orden descendente como números
			while (stoi(a[i]) > stoi(pivote)) i++;
			while (stoi(a[j]) < stoi(pivote)) j--;
			break;
		case 3: // Orden alfabético
			while (a[i] < pivote)i++;
			while (a[j] > pivote)j--;
		case 4: // Orden por cantidad de letras de menos letras a mas
			while (a[i].length() < pivote.length())i++;
			while (a[j].length() > pivote.length())j--;
			break;

		default:
			break;
		}
		if (i <= j) {
			
			string temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
			
			//Imprimir(a, 5, pivote);
			cout << endl;
		}
	} while (i <= j);
	if (primero < j)
		quicksort(a, primero, j,tipo);
	if (i < ultimo)
		quicksort(a, i, ultimo,tipo);
}

void Funciones::Imprimir(vector<string> &a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "->";
	}
	cout << endl;
}	


